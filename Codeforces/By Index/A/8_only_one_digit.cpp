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
    int x;
    cin >> x;
    int ans = 9;
    while (x > 0)
    {
        ans = min(ans,x % 10);
        x /= 10;
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
/*
You are given an integer x
. You need to find the smallest non-negative integer y
 such that the numbers x
 and y
 share at least one common digit. In other words, there must exist a decimal digit d
 that appears in both the representation of the number x
 and the number y
.

Input
The first line contains an integer t
 (1≤t≤1000
) — the number of test cases.

The first line of each test case contains one integer x
 (1≤x≤1000
).

Output
For each test case, output one integer y
 — the minimum non-negative number that satisfies the condition.

Example
InputCopy
5
6
96
78
122
696
OutputCopy
6
6
7
1
6
Note
In the first test case, the numbers 6
 and 6
 share the common digit '6'. Moreover, there is no natural number smaller than this that shares a common digit.

In the second test case, the numbers 6
 and 96
 share the common digit '6'.



*/