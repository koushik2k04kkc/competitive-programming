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
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (y1 == y2)
    {
        int side = abs(x2 - x1);
        cout << x1 << " " << y1 + side << " " << x2 << " " << y2 + side nl;
    }
    else if (x1 == x2)
    {
        int side = abs(y2 - y1);
        cout << x1 + side << " " << y1 << " " << x2 + side << " " << y2 nl;
    }
    else if (abs(x1 - x2) != abs(y1 - y2))
        cout << "-1" nl;
    else
        cout << x1 << " " << y2 << " " << x2 << " " << y1 nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
/*
Pashmak has fallen in love with an attractive girl called Parmida since one year ago...

Today, Pashmak set up a meeting with his partner in a romantic garden. Unfortunately, Pashmak has forgotten where the garden is. But he remembers that the garden looks like a square with sides parallel to the coordinate axes. He also remembers that there is exactly one tree on each vertex of the square. Now, Pashmak knows the position of only two of the trees. Help him to find the position of two remaining ones.

Input
The first line contains four space-separated x1, y1, x2, y2 ( - 100 ≤ x1, y1, x2, y2 ≤ 100) integers, where x1 and y1 are coordinates of the first tree and x2 and y2 are coordinates of the second tree. It's guaranteed that the given points are distinct.

Output
If there is no solution to the problem, print -1. Otherwise print four space-separated integers x3, y3, x4, y4 that correspond to the coordinates of the two other trees. If there are several solutions you can output any of them.

Note that x3, y3, x4, y4 must be in the range ( - 1000 ≤ x3, y3, x4, y4 ≤ 1000).

Examples
InputCopy
0 0 0 1
OutputCopy
1 0 1 1
InputCopy
0 0 1 1
OutputCopy
0 1 1 0
InputCopy
0 0 1 2
OutputCopy
-1

*/