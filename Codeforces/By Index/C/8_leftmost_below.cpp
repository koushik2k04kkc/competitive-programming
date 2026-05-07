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
    vi a(n);
    fl(i, n) cin >> a[i];
    ll mn = a[0], idx = 1;
    for (int i = 1; i < n;i++){
        if(a[i]>=2*mn){
            pn;
            return;
        }
        mn = min(mn, a[i]);
    }
    py;
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
Consider an array a1,…,an
. Initially, ai=0
 for every i
.

You can do operations of the following form.

You choose an integer x
 greater than min(a)
.
Then, i
 is defined as the minimum index such that ai<x
. In other words, i
 is the unique integer between 1
 and n
 inclusive such that ai<x
 and aj≥x
 for every 1≤j≤i−1
.
Finally, ai
 is incremented by x
.
For example, if a=[6,8,2,1]
 and you choose x=6
, then i
 will be equal to 3
 (since a1≥6
, a2≥6
, and a3<6
) and a
 will become [6,8,8,1]
.

You can do as many operations as you want. Can you reach a target array b1,…,bn
?

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤10000
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (2≤n≤200000
).

The second line of each test case contains n
 integers b1,b2,…,bn
 (1≤bi≤109
).

The sum of n
 over all test cases does not exceed 200000
.

Output
For each test case, print YES if you can reach the target array and NO otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

Example
InputCopy
4
4
5 6 1 1
3
3 1 2
3
40 60 90
2
1 1
OutputCopy
YES
NO
NO
YES
Note
In the first test case, we can do the following sequence of operations:

we choose x=2
, a
 becomes [2,0,0,0]
we choose x=2
, a
 becomes [2,2,0,0]
we choose x=3
, a
 becomes [5,2,0,0]
we choose x=4
, a
 becomes [5,6,0,0]
we choose x=1
, a
 becomes [5,6,1,0]
we choose x=1
, a
 becomes [5,6,1,1]
In the second test case, we can prove there is no way to reach [3,1,2]
.



*/