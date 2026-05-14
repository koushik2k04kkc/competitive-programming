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
    vi a(n), ans(n);
    for (auto &it : a) cin >> it;
    fl(i,n)
    {
        ans[i] = n - a[i] + 1;
    }
    for (auto &it : ans) cout << it << " ";
    cout nl;
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
You are given a permutation∗
 p
 of size n
.

Your task is to find a permutation q
 of size n
 such that GCD
†
(pi+qi,pi+1+qi+1)≥3
 for all 1≤i<n
. In other words, the greatest common divisor of the sum of any two adjacent positions should be at least 3
.

It can be shown that this is always possible.

∗
A permutation of length m
 is an array consisting of m
 distinct integers from 1
 to m
 in arbitrary order. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (2
 appears twice in the array), and [1,3,4]
 is also not a permutation (m=3
 but there is 4
 in the array).

†
gcd(x,y)
 denotes the greatest common divisor (GCD) of integers x
 and y
.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains an integer n
 (2≤n≤2⋅105
).

The second line contains n
 integers p1,p2,…,pn
 (1≤pi≤n
).

It is guaranteed that the given array forms a permutation.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the permutation q
 on a new line. If there are multiple possible answers, you may output any.

Example
InputCopy
3
3
1 3 2
5
5 1 2 4 3
7
6 7 1 5 4 3 2
OutputCopy
2 3 1
4 5 1 2 3
2 1 3 7 5 6 4
Note
In the first test case, GCD(1+2,3+3)=3≥3
 and GCD(3+3,2+1)=3≥3
, so the output is correct.



*/