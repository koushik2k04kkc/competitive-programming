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
    ll a, b;
    ll xk, yk, xq, yq;
    cin >> a >> b;
    ll dx[] = {a, a, -a, -a, b, b, -b, -b};
    ll dy[] = {b, -b, b, -b, a, -a, a, -a};
    ll cnt = 0;
    cin >> xk >> yk >> xq >> yq;
    set<pi> st;
    for (int i = 0; i < 8; i++)
    {
        ll cx = xk + dx[i];
        ll cy = yk + dy[i];
        if ((abs(cx - xq) == a && abs(cy - yq) == b) || (abs(cx - xq) == b && abs(cy - yq) == a))
            st.insert({cx, cy});
    }
    cout << st.size() nl;
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
Lunchbox is done with playing chess! His queen and king just got forked again!

In chess, a fork is when a knight attacks two pieces of higher value, commonly the king and the queen. Lunchbox knows that knights can be tricky, and in the version of chess that he is playing, knights are even trickier: instead of moving 1
 tile in one direction and 2
 tiles in the other, knights in Lunchbox's modified game move a
 tiles in one direction and b
 tiles in the other.

Lunchbox is playing chess on an infinite chessboard which contains all cells (x,y)
 where x
 and y
 are (possibly negative) integers. Lunchbox's king and queen are placed on cells (xK,yK)
 and (xQ,yQ)
 respectively. Find the number of positions such that if a knight was placed on that cell, it would attack both the king and queen.

Input
Each test contains multiple test cases. The first line contains an integer t
 (1≤t≤1000
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers a
 and b
 (1≤a,b≤108
) — describing the possible moves of the knight.

The second line of each test case contains two integers xK
 and yK
 (0≤xK,yK≤108
) — the position of Lunchbox's king.

The third line in a test case contains xQ
 and yQ
 (0≤xQ,yQ≤108
) — the position of Lunchbox's queen.

It is guaranteed that Lunchbox's queen and king will occupy different cells. That is, (xK,yK)≠(xQ,yQ)
.

Output
For each test case, output the number of positions on an infinite chessboard such that a knight can attack both the king and the queen.

Example
InputCopy
4
2 1
0 0
3 3
1 1
3 1
1 3
4 4
0 0
8 0
4 2
1 4
3 4
OutputCopy
2
1
2
0
Note
In the first test case, the knight can move 2 squares in one direction and 1 square in the other (it is essentially the same as the knight in standard chess). A knight placed on (2,1)
 or (1,2)
 would attack both the king and queen.

Example of a knight placement that forks the queen and king in the first test case. The squares that the knight attacks are highlighted in red.
In the second test case, a knight placed on (2,2)
 would attack both the king and queen.

Example of a knight placement that does not fork the queen and king in the second test case. The knight attacks the king but not the queen.
In the third test case, a knight placed on (4,4)
 or (4,−4)
 would attack both the king and queen.

In the fourth test case, there are no positions where the knight can attack both the king and the queen.

(Credits to EnDeRBeaT for the nice images)
https://codeforces.com/contest/1904/problem/A
*/