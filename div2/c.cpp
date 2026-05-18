#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<ll> vi;
const ll MOD = (ll)1e9 + 7;
void solve()
{
    ll n;
    cin >> n;
    vi a(n), b;
    ll one = 0, ans = 0;
    fl(i, n)
    {
        cin >> a[i];
        if (a[i] == 1)
        {
            one++;
        }
        else if (a[i] >= 2)
        {
            b.pb(a[i]);
        }
    }
    if (b.empty())
    {
        cout << 0 << "\n";
        return;
    }
    if (b.size() == 1)
    {
        ans = b[0] + min(one, b[0] / 2);
    }
    else
    {
        ll sum = 0, total = 0;
        for (auto x : b)
        {
            sum += x;
            total += (x - 2) / 2;
        }
        ans = sum + min(one, total);
    }
    if (ans < 3)
    {
        cout << 0 << nl;
    }
    else
    {
        cout << ans << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}