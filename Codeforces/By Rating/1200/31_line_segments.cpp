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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll dist = (a - c) * (a - c) + (b - d) * (b - d);
    ll s = 0, mx = 0;
    fl(i,n){
        ll x;
        cin >> x;
        s += x;
        mx = max(x, mx);
    }
    if(s*s<dist){
        pn;
        return;
    }
    ll mn = max(2 * mx - s, 0ll);
    if(mn*mn>dist){
        pn;
        return;
    }
    py;
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
You are given two points (px,py)
 and (qx,qy)
 on a Euclidean plane.

You start at the starting point (px,py)
 and will perform n
 operations. In the i
-th operation, you must choose any point such that the Euclidean distance∗
 between your current position and the point is exactly ai
, and then move to that point.

Determine whether it is possible to reach the terminal point (qx,qy)
 after performing all operations.

∗
The Euclidean distance between (x1,y1)
 and (x2,y2)
 is (x1−x2)2+(y1−y2)2−−−−−−−−−−−−−−−−−−√

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤103
) — the length of the sequence a
.

The second line of each test case contains four integers px,py,qx,qy
 (1≤px,py,qx,qy≤107
) — the coordinates of the starting point and terminal point.

The third line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤104
) — the distance to move in each operation.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output "Yes" if it is possible to reach the terminal point (qx,qy)
 after all operations; otherwise, output "No".

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

Example
InputCopy
5
2
1 1 5 1
3 3
3
1 1 3 3
2 3 4
2
100 100 100 100
4 5
1
5 1 1 4
5
2
10000000 10000000 10000000 10000000
10000 10000
OutputCopy
Yes
Yes
No
Yes
Yes
Note
Here is a picture that shows a possible movement of the first test case. The coordinates of point r1
 are (3,1+5–√)
.

The first test case.
Here is a picture that shows a possible movement of the second test case. The coordinates of point r1
 are (1+3–√,0)
, and the coordinates of point r2
 are (−(3√+4)(33(149−243√)√−73√−38)104,−3(1331−7643√)√+123√−27104)
.

The second test case.
For the third test case, it can be shown that there is no set of moves that satisfies all requirements.

Here is a picture that shows a possible movement of the fourth test case.

The fourth test case.
*/