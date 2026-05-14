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
    ll n;
    cin >> n;
    ll x = 1, e = 0;
    while (x * 3 <= n)
    {
        x *= 3;
        e++;
    }
    ll c = 0;
    while (n > 0)
    {
        if (n - x >= 0)
        {
            n -= x;
            c += (x * 3) + (e * (x / 3));
        }
        else
        {
            x /= 3;
            e--;
        }
    }
    cout << c nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1; cin >> t;
    while(t--)  solve();
     return 0;
}