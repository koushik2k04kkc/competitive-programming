#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n;
    cin >> n;
    vi a(n + 1), pre(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0){
            pre[i] = pre[i - 1] + a[i];
        }
        else{
            pre[i] = pre[i - 1] - a[i];
        }
    }
    vi odd;
    for (int i = 1; i <= n; i += 2){
        odd.pb(a[i]);
    }
    ll ans = 0, ex = 0, req = LLONG_MIN;
    vector<ll> r(n + 1);
    int p = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i >= 2){
            req = max(req, r[i - 2]);
        }
        ll v = pre[i] + ex;
        while (v < req)
        {
            ll t = min(odd[p], req - v);
            odd[p] -= t;
            ex += t;
            ans += t;
            v += t;
            if (odd[p] == 0){
                p++;
            }
        }
        r[i] = v;
    }
    cout << ans nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}