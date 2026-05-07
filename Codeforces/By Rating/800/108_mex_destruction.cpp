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
    vi v(n);
    fl(i, n) cin >> v[i];
    int ans = 0;
    int i = 0;
    while (i < n)
    {
        if (v[i] == 0)
        {
            i++;
            continue;
        }
        while (i < n && v[i] != 0) i++;
        ans++;
    }
    cout << min(ans, 2) nl;
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
Evirir the dragon snuck into a wizard's castle and found a mysterious contraption, and their playful instincts caused them to play with (destroy) it...

Evirir the dragon found an array a1,a2,…,an
 of n
 non-negative integers.

In one operation, they can choose a non-empty subarray∗
 b
 of a
 and replace it with the integer mex(b)
†
. They want to use this operation any number of times to make a
 only contain zeros. It can be proven that this is always possible under the problem constraints.

What is the minimum number of operations needed?

∗
An array c
 is a subarray of an array d
 if c
 can be obtained from d
 by the deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.

†
The minimum excluded (MEX) of a collection of integers f1,f2,…,fk
 is defined as the smallest non-negative integer x
 which does not occur in the collection f
.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤200
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤50
), the length of a
.

The second line of each test case contains n
 space-separated integers, a1,a2,…,an
 (0≤ai≤100
).

It is guaranteed that the sum of n
 over all test cases does not exceed 500
.

Output
For each test case, output a single integer on a line, the minimum number of operations needed to make a
 contain only zeros.

Example
InputCopy
10
4
0 1 2 3
6
0 0 0 0 0 0
5
1 0 1 0 1
5
3 1 4 1 5
4
3 2 1 0
7
9 100 0 89 12 2 3
4
0 3 9 0
7
0 7 0 2 0 7 0
1
0
2
0 1
OutputCopy
1
0
2
1
1
2
1
2
0
1
Note
In the first test case, Evirir can choose the subarray b=[1,2,3]
 and replace it with mex(1,2,3)=0
, changing a
 from [0,1,2,3––––––]
 to [0,0]
 (where the chosen subarray is underlined). Therefore, the answer is 1
.

In the second test case, a
 already contains only 0
s, so no operation is needed.

In the third test case, Evirir can change a
 as follows: [1,0,1,0,1––––––––]→[1,2––––]→[0]
. Here, mex(0,1,0,1)=2
 and mex(1,2)=0
.

In the fourth test case, Evirir can choose b
 to be the entire array a
, changing a
 from [3,1,4,1,5––––––––––]
 to [0]
.
*/