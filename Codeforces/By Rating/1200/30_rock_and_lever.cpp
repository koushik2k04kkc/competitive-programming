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
    vi a(n);
    fl(i, n) cin >> a[i];
    ll ans = 0, cnt = 0;
    sort(all(a));
    for (ll i = 1; i <= 1e9; i = i * 2)
    {
        cnt = 0;
        fl(j, n)
        {
            if (a[j] >= i and a[j] < 2 * i)
            {
                cnt++;
            }
        }
        if (cnt > 0)
        {
            ans += cnt * (cnt - 1) / 2;
        }
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
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
Danik urgently needs rock and lever! Obviously, the easiest way to get these things is to ask Hermit Lizard for them.

Hermit Lizard agreed to give Danik the lever. But to get a stone, Danik needs to solve the following task.

You are given a positive integer n
, and an array a
 of positive integers. The task is to calculate the number of such pairs (i,j)
 that i<j
 and ai
 &
 aj≥ai⊕aj
, where &
 denotes the bitwise AND operation, and ⊕
 denotes the bitwise XOR operation.

Danik has solved this task. But can you solve it?

Input
Each test contains multiple test cases.

The first line contains one positive integer t
 (1≤t≤10
) denoting the number of test cases. Description of the test cases follows.

The first line of each test case contains one positive integer n
 (1≤n≤105
) — length of the array.

The second line contains n
 positive integers ai
 (1≤ai≤109
) — elements of the array.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For every test case print one non-negative integer — the answer to the problem.

Example
InputCopy
5
5
1 4 3 7 10
3
1 1 1
4
6 2 5 3
2
2 4
1
1
OutputCopy
1
3
2
0
0
Note
In the first test case there is only one pair: (4,7)
: for it 4
 &
 7=4
, and 4⊕7=3
.

In the second test case all pairs are good.

In the third test case there are two pairs: (6,5)
 and (2,3)
.

In the fourth test case there are no good pairs.



*/