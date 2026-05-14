#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

typedef unsigned long long int ull;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pi;
typedef pair<char, ll> pci;
typedef vector<pi> vii;
typedef map<ll, ll> mi;
typedef map<char, ll> mci;
typedef set<ll> seti;
typedef set<char> setc;
typedef unordered_set<ll> useti;
typedef unordered_set<char> usetc;

// Koushik Kumar Chakraborty (●'◡'●)

void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    int x, y;
    cin >> x >> y;
    for (int i = 1; i < n; i++)
    {
        cin >> x >> y;
        ans += x + y;
    }
    ans += 2 * m;
    ans *= 2;
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
There is an m
 by m
 square stamp on an infinite piece of paper. Initially,
  the bottom-left corner of the square stamp is aligned 
  with the bottom-left corner of the paper. You are given two integer sequences x
 and y
, each of length n
. For each step i
 from 1
 to n
, the following happens:

Move the stamp xi
 units to the right and yi
 units upwards.
Press the stamp onto the paper, leaving an m
 by m
 colored square at its current position.
Note that the elements of sequences x
 and y
 have a special constraint: 1≤xi,yi≤m−1
.

Note that you do not press the stamp at the bottom-left 
corner of the paper. Refer to the notes section for better understanding.

It can be proven that after all the operations, the colored 
shape on the paper formed by the stamp is a single connected
 region. Find the perimeter of this colored shape.

Input
Each test contains multiple test cases. The first line contains 
the number of test cases t
 (1≤t≤1000
). The description of the test cases follows.

The first line of each test case contains two integers n
 and m
 (1≤n≤100
, 2≤m≤100
) — the number of operations performed and the side length of the square stamp.

The i
-th of the next n
 lines contains two integers xi
 and yi
 (1≤xi,yi≤m−1
) — the distance that the stamp will be moved right and up during the i
-th operation, respectively.

Note that there are no constraints on the sum of n
 over all test cases.

Output
For each test case, output a single integer representing the
 perimeter of the colored shape on the paper.

Example
InputCopy
3
4 3
1 1
2 2
2 1
1 2
1 2
1 1
6 7
3 6
1 1
3 1
6 6
5 4
6 1
OutputCopy
32
8
96
Note
In the first example, the stamp has a side length of 3
 and is pressed 4
 times at coordinates (1,1)
, (3,3)
, (5,4)
, and (6,6)
. The piece of paper looks like that afterwards:



Here, the square formed by the first press is colored blue, the second red, the third green, and the fourth purple. The combined shape, whose perimeter we need to calculate, looks like that:



From the diagram, it can be seen that this shape has a perimeter of 32
.



*/