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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = c - a, y = d - b;
    int ans = -1;
    if (y >= 0 and y >= x)
    {
        ans = y + y - x;
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
    while(t--){
        solve();
    }
    return 0;
}
/*
YunQian is standing on an infinite plane with the Cartesian coordinate system on it. In one move, she can move to the diagonally adjacent point on the top right or the adjacent point on the left.

That is, if she is standing on point (x,y)
, she can either move to point (x+1,y+1)
 or point (x−1,y)
.

YunQian initially stands at point (a,b)
 and wants to move to point (c,d)
. Find the minimum number of moves she needs to make or declare that it is impossible.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of test cases follows.

The first line and only line of each test case contain four integers a
, b
, c
, d
 (−108≤a,b,c,d≤108
).

Output
For each test case, if it is possible to move from point (a,b)
 to point (c,d)
, output the minimum number of moves. Otherwise, output −1
.

Example
InputCopy
6
-1 0 -1 2
0 0 4 5
-2 -1 1 1
-3 2 -3 2
2 -1 -1 -1
1 1 0 2
OutputCopy
4
6
-1
0
3
3
Note
In the first test case, one possible way using 4
 moves is (−1,0)→(0,1)→(−1,1)→(0,2)→(−1,2)
. It can be proven that it is impossible to move from point (−1,0)
 to point (−1,2)
 in less than 4
 moves.



*/