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
    ll n;
    cin >> n;
    int ans = 1;
    while(2*ans<n){
        ans *= 2;
    }
    for (int i = ans - 1; i >= 0;i--){
        cout << i << " ";
    }
    for (int i = ans; i < n;i++){
        cout << i << " ";
    }
    cout nl;
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
It has finally been decided to build a roof over the football field in School 179. Its construction will require placing n
 consecutive vertical pillars. Furthermore, the headmaster wants the heights of all the pillars to form a permutation p
 of integers from 0
 to n−1
, where pi
 is the height of the i
-th pillar from the left (1≤i≤n)
.

As the chief, you know that the cost of construction of consecutive pillars is equal to the maximum value of the bitwise XOR of heights of all pairs of adjacent pillars. In other words, the cost of construction is equal to max1≤i≤n−1pi⊕pi+1
, where ⊕
 denotes the bitwise XOR operation.

Find any sequence of pillar heights p
 of length n
 with the smallest construction cost.

In this problem, a permutation is an array consisting of n
 distinct integers from 0
 to n−1
 in arbitrary order. For example, [2,3,1,0,4]
 is a permutation, but [1,0,1]
 is not a permutation (1
 appears twice in the array) and [1,0,3]
 is also not a permutation (n=3
, but 3
 is in the array).

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). Description of the test cases follows.

The only line for each test case contains a single integer n
 (2≤n≤2⋅105
) — the number of pillars for the construction of the roof.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case print n
 integers p1
, p2
, …
, pn
 — the sequence of pillar heights with the smallest construction cost.

If there are multiple answers, print any of them.

Example
InputCopy
4
2
3
5
10
OutputCopy
0 1
2 0 1
3 2 1 0 4
4 6 3 2 0 8 9 1 7 5
Note
For n=2
 there are 2
 sequences of pillar heights:

[0,1]
 — cost of construction is 0⊕1=1
.
[1,0]
 — cost of construction is 1⊕0=1
.
For n=3
 there are 6
 sequences of pillar heights:

[0,1,2]
 — cost of construction is max(0⊕1,1⊕2)=max(1,3)=3
.
[0,2,1]
 — cost of construction is max(0⊕2,2⊕1)=max(2,3)=3
.
[1,0,2]
 — cost of construction is max(1⊕0,0⊕2)=max(1,2)=2
.
[1,2,0]
 — cost of construction is max(1⊕2,2⊕0)=max(3,2)=3
.
[2,0,1]
 — cost of construction is max(2⊕0,0⊕1)=max(2,1)=2
.
[2,1,0]
 — cost of construction is max(2⊕1,1⊕0)=max(3,1)=3
.


*/