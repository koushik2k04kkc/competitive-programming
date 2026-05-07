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
    int n, k;
    cin >> n >> k;
    vi ans;
    if (n >= k && n % 2 == k % 2)
    {
        for (int i = 1; i < k; i++)
            ans.pb(1);
        ans.pb(n - k + 1);
    }
    else if (n >= k * 2 && n % 2 == 0)
    {
        for (int i = 1; i < k; i++)
            ans.pb(2);
        ans.pb(n - 2 * k + 2);
    }
    if (ans.size())
    {
        py;
        for (auto x : ans)
            cout << x << ' ';
        cout nl;
    }
    else
        pn;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/*
You are given two positive integers n
 (1≤n≤109
) and k
 (1≤k≤100
). Represent the number n
 as the sum of k
 positive integers of the same parity (have the same remainder when divided by 2
).

In other words, find a1,a2,…,ak
 such that all ai>0
, n=a1+a2+…+ak
 and either all ai
 are even or all ai
 are odd at the same time.

If such a representation does not exist, then report it.
*/