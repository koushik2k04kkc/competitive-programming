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
    string s;
    cin >> s;
    ll n = s.size();
    ll total13 = 0;
    for (char c : s)
    {
        if (c == '1' || c == '3')  total13++;
    }
    ll left2 = 0, left13 = 0, t = 0;
    for (int i = 0; i <= n; ++i)
    {
        int curr = left2 + (total13 - left13);
        if (curr > t) t = curr;
        if (i == n) break;
        if (s[i] == '2')
        {
            left2++;
        }
        else if (s[i] == '1' || s[i] == '3')
        {
            left13++;
        }
    }
    cout << n - t << nl;
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