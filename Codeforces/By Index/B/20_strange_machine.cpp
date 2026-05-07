#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<ll> vi;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    ll b = 0;
    fl(i,n)
    {
        if (s[i] == 'B')
        {
            b = 1;
            break;
        }
    }
    while(q--)
    {
        ll a;
        cin >> a;
        if (b == 0)
        {
            cout << a nl;
        }
        else
        {
            ll ans = 0, pos = 0;
            while (a>0)
            {
                if (s[pos] == 'A')
                {
                    a--;
                }
                else
                {
                    a /= 2;
                }
                pos++;
                ans++;
                if (pos == n)
                {
                    pos = 0;
                }
            }
            cout << ans nl;
        }
    }
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