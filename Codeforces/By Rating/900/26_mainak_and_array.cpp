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
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

typedef unsigned long long int ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcll;
typedef map<ll, ll> mll;
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
    vector<int> v(n);
    fl(i,n){
        cin >> v[i];
    }
    int p = v[0];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, v[i] - p);
    }
    p = v[n - 1];
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, p - v[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        ans = max(ans, v[i] - v[i + 1]);
    }
    cout << ans nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
Mainak has an array a1,a2,…,an
 of n
 positive integers. He will do the following operation to this array exactly once:

Pick a subsegment of this array and cyclically rotate it by any amount.
Formally, he can do the following exactly once:
Pick two integers l
 and r
, such that 1≤l≤r≤n
, and any positive integer k
.
Repeat this k
 times: set al=al+1,al+1=al+2,…,ar−1=ar,ar=al
 (all changes happen at the same time).
Mainak wants to maximize the value of (an−a1)
 after exactly one such operation. Determine the maximum value of (an−a1)
 that he can obtain.

Input
Each test contains multiple test cases. The first line contains a single integer t
 (1≤t≤50
) — the number of test cases. Description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤2000
).

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤999
).

It is guaranteed that the sum of n
 over all test cases does not exceed 2000
.

Output
For each test case, output a single integer — the maximum value of (an−a1)
 that Mainak can obtain by doing the operation exactly once.

Example
InputCopy
5
6
1 3 9 11 5 7
1
20
3
9 99 999
4
2 1 8 1
3
2 1 5
OutputCopy
10
0
990
7
4
Note
In the first test case, we can rotate the subarray from index 3
 to index 6
 by an amount of 2
 (i.e. choose l=3
, r=6
 and k=2
) to get the optimal array:
[1,3,9,11,5,7–––––––––]⟶[1,3,5,7,9,11–––––––––]
So the answer is an−a1=11−1=10
.
In the second testcase, it is optimal to rotate the subarray starting and ending at index 1
 and rotating it by an amount of 2
.
In the fourth testcase, it is optimal to rotate the subarray starting from index 1
 to index 4
 and rotating it by an amount of 3
. So the answer is 8−1=7
.


*/