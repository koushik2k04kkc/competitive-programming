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
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    if (l1 + l2 + l3 == b1 && b1 == b2 && b2 == b3)
    {
        py;
    }
    else if (l2 + l3 == l1 && b2 == b3 && b1 + b2 == l1)
    {
        py;
    }
    else if (b1 + b2 + b3 == l1 && l1 == l2 && l2 == l3)
    {
        py;
    }
    else if (b2 + b3 == b1 && l2 == l3 && l1 + l2 == b1)
    {
        py;
    }
    else
    {
        pn;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
Aryan is an ardent lover of squares but a hater of rectangles (Yes, he knows all squares are rectangles). But Harshith likes to mess with Aryan. Harshith gives Aryan three rectangles of sizes l1×b1
, l2×b2
, and l3×b3
 such that l3≤l2≤l1
 and b3≤b2≤b1
. Aryan, in order to defeat Harshith, decides to arrange these three rectangles to form a square such that no two rectangles overlap and the rectangles are aligned along edges. Rotating rectangles is not allowed. Help Aryan determine if he can defeat Harshith.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤100
). The description of the test cases follows.

Each test case contains a single line with 6
 space-separated integers l1,b1,l2,b2,l3
, and b3
 (1≤l3≤l2≤l1≤100
, 1≤b3≤b2≤b1≤100
) — the dimensions of the three rectangles.

Output
For each testcase, print "YES" if the rectangles can be arranged to form a square; otherwise, "NO".

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

Example
InputCopy
5
100 100 10 10 1 1
5 3 5 1 5 1
2 3 1 2 1 1
8 5 3 5 3 3
3 3 3 3 2 1
OutputCopy
NO
YES
YES
NO
NO
Note
In the second test case, the three rectangles 5×3
, 5×1
, and 5×1
 can be arranged as follows to form a square.


In the fourth test case, it can be proven that the rectangles can't be arranged to form a square with the given constraints.



*/