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
    int n, x, y;
    cin >> n >> x >> y;
    ll g = __gcd(x, y);
    ll l = (x * 1LL * y) / g;
    ll cx = n / x - n / l;
    ll cy = n / y - n / l;
    ll big = cx*(2*n-cx+1) / 2;
    ll small = cy*(1 + cy) / 2;
    cout << (ll)big - (ll)small nl;
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
You are given 3
 integers — n
, x
, y
. Let's call the score of a permutation†
 p1,…,pn
 the following value:

(p1⋅x+p2⋅x+…+p⌊nx⌋⋅x)−(p1⋅y+p2⋅y+…+p⌊ny⌋⋅y)

In other words, the score of a permutation is the sum of pi
 for all indices i
 divisible by x
, minus the sum of pi
 for all indices i
 divisible by y
.

You need to find the maximum possible score among all permutations of length n
.

For example, if n=7
, x=2
, y=3
, the maximum score is achieved by the permutation [2,6–,1–,7–,5,4––,3]
 and is equal to (6+7+4)−(1+4)=17−5=12
.

†
 A permutation of length n
 is an array consisting of n
 distinct integers from 1
 to n
 in any order. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (the number 2
 appears twice in the array) and [1,3,4]
 is also not a permutation (n=3
, but the array contains 4
).

Input
The first line of input contains an integer t
 (1≤t≤104
) — the number of test cases.

Then follows the description of each test case.

The only line of each test case description contains 3
 integers n
, x
, y
 (1≤n≤109
, 1≤x,y≤n
).

Output
For each test case, output a single integer — the maximum score among all permutations of length n
.

Example
InputCopy
8
7 2 3
12 6 3
9 1 9
2 2 2
100 20 50
24 4 6
1000000000 5575 25450
4 4 1
OutputCopy
12
-3
44
0
393
87
179179179436104
-6
Note
The first test case is explained in the problem statement above.

In the second test case, one of the optimal permutations will be [12,11,2–,4,8,9––,10,6,1–,5,3,7––]
. The score of this permutation is (9+7)−(2+9+1+7)=−3
. It can be shown that a score greater than −3
 can not be achieved. Note that the answer to the problem can be negative.

In the third test case, the score of the permutation will be (p1+p2+…+p9)−p9
. One of the optimal permutations for this case is [9,8,7,6,5,4,3,2,1]
, and its score is 44
. It can be shown that a score greater than 44
 can not be achieved.

In the fourth test case, x=y
, so the score of any permutation will be 0
.
*/