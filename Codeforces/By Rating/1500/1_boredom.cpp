#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define be(v) v.begin(), v.end()
#define eb(v) v.end(), v.begin()

typedef unsigned long long int ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;
typedef unordered_set<ll> usll;
typedef unordered_set<char> usc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int mx = 0;
    fl(i,n)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    vi freq(mx + 1, 0);
    fl(i,n)
    {
        freq[a[i]]++;
    }

    vi dp(mx + 1, 0);
    dp[1] = freq[1] * 1;
    for (int i = 2; i <= mx; ++i)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + freq[i] * i);
    }

    cout << dp[mx] nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}