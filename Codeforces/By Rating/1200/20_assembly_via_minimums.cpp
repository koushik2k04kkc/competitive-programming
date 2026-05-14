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
#define eb(v) v.rbegin(), v.rend()

typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n;cin >> n;
    int m = n * (n - 1) / 2;
    vi b(m);
    fl(i, m) cin >> b[i];
    sort(be(b));
    vi a;
    int step = n - 1;
    int p = 0;
    for (int i = 0; i < n - 1; i++)
    {
        a.pb(b[p]);
        p += step;
        step--;
    }
    a.pb(1000000000);
    for (auto x : a)  cout << x << ' ';
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
Sasha has an array a
 of n
 integers. He got bored and for all i
, j
 (i<j
), he wrote down the minimum value of ai
 and aj
. He obtained a new array b
 of size n⋅(n−1)2
.

For example, if a=
 [2,3,5,1
], he would write [min(2,3),min(2,5),min(2,1),min(3,5),min(3,1),min(5,1)
] =
 [2,2,1,3,1,1
].

Then, he randomly shuffled all the elements of the array b
.

Unfortunately, he forgot the array a
, and your task is to restore any possible array a
 from which the array b
 could have been obtained.

The elements of array a
 should be in the range [−109,109]
.

Input
The first line contains a single integer t
 (1≤t≤200
) — the number of test cases.

The first line of each test case contains a single integer n
 (2≤n≤103
) — the length of array a
.

The second line of each test case contains n⋅(n−1)2
 integers b1,b2,…,bn⋅(n−1)2
 (−109≤bi≤109
) — the elements of array b
.

It is guaranteed that the sum of n
 over all tests does not exceed 103
 and for each array b
 in the test, there exists an original array.

Output
For each test case, output any possible array a
 of length n
.

Example
InputCopy
5
3
1 3 1
2
10
4
7 5 3 5 3 3
5
2 2 2 2 2 2 2 2 2 2
5
3 0 0 -2 0 -2 0 0 -2 -2
OutputCopy
1 3 3
10 10
7 5 3 12
2 2 2 2 2
0 -2 0 3 5
Note
In the first sample, Sasha chose the array [1,3,3]
, then the array b
 will look like [min(a1,a2)=1,min(a1,a3)=1,min(a2,a3)=3]
, after shuffling its elements, the array can look like [1,3,1]
.

In the second sample, there is only one pair, so the array [10,10]
 is suitable. Another suitable array could be [15,10]
.



*/