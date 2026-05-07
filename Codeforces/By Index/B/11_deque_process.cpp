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
    ll k = 0, l = 0, r = n - 1;
    string ans;
    while(r>=l){
        if(k%2){
            if(a[l]>a[r]){
                ans += 'R';
                r--;
            } else{
                ans += 'L';
                l++;
            }
        } else{
            if(a[l]>a[r]){
                ans += 'L';
                l++;
            }
            else{
                ans += 'R';
                r--;
            }
        }
        k++;
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
We say that an array a
 of size n
 is bad if and only if there exists 1≤i≤n−4
 such that one of the following conditions holds:

ai<ai+1<ai+2<ai+3<ai+4
ai>ai+1>ai+2>ai+3>ai+4
An array is good if and only if it's not bad. For example:

a=[3,1,2,4,5,6]
 is bad because a2<a3<a4<a5<a6
.
a=[7,6,5,4,1,2,3]
 is bad because a1>a2>a3>a4>a5
.
a=[7,6,5,1,2,3,4]
 is good.
You're given a permutation∗
 p1,p2,…,pn
.

You must perform n
 turns. At each turn, you must remove either the leftmost or the rightmost remaining element in p
. Let qi
 be the element removed at the i
-th turn.

Choose which element to remove at each turn so that the resulting array q
 is good. We can show that under the given constraints, it's always possible.

∗
A permutation of length n
 is an array consisting of n
 distinct integers from 1
 to n
 in arbitrary order. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (2
 appears twice in the array), and [1,3,4]
 is also not a permutation (n=3
 but there is 4
 in the array).

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤10000
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (5≤n≤100000
) — the length of the array.

The second line of each test case contains n
 integers p1,p2,…,pn
 (1≤pi≤n
, pi
 are pairwise distinct) — elements of the permutation.

It is guaranteed that the sum of n
 over all test cases doesn't exceed 200000
.

Output
For each test case, you must output a string s
 of length n
. For every 1≤i≤n
, at the i
-th turn:

si=L
 means that you removed the leftmost element of p
si=R
 means that you removed the rightmost element of p
We can show that an answer always exists. If there are multiple solutions, print any of them.

Example
InputCopy
6
7
1 2 3 4 5 6 7
9
1 3 6 8 9 7 5 4 2
12
1 2 11 3 6 4 7 8 12 5 10 9
6
4 1 2 5 6 3
5
1 2 3 5 4
9
5 1 8 6 2 7 9 4 3
OutputCopy
RRRLLLL
LLRRLLRRL
LLLLLLLLLLLL
LLLLLL
LLLLL
LLLLLLLLL
Note
In the first test case, the sequence RRRLLLL
 results in q=[7,6,5,1,2,3,4]
.

In the second test case, the sequence LLRRLLRRL
 results in q=[1,3,2,4,6,8,5,7,9]
.
*/