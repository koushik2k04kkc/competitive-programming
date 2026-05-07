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
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

typedef unsigned long long int ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;
typedef unordered_set<ll> usll;
typedef unordered_set<char> usc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    ll x, n;
    cin >> x >> n;
    ll ans = 0;
    if (x % 2 == 0)
    {
        if (n % 4 == 0)
            ans = x;
        else if (n % 4 == 1)
            ans = x - n;
        else if (n % 4 == 2)
            ans = x + 1;
        else
            ans = x + n + 1;
    }
    else
    {
        if (n % 4 == 0)
            ans = x;
        else if (n % 4 == 1)
            ans = x + n;
        else if (n % 4 == 2)
            ans = x - 1;
        else
            ans = x - n - 1;
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
The grasshopper is located on the numeric axis at the point with coordinate x0
.

Having nothing else to do he starts jumping between integer points on the axis. Making a jump from a point with coordinate x
 with a distance d
 to the left moves the grasshopper to a point with a coordinate x−d
, while jumping to the right moves him to a point with a coordinate x+d
.

The grasshopper is very fond of positive integers, so for each integer i
 starting with 1
 the following holds: exactly i
 minutes after the start he makes a jump with a distance of exactly i
. So, in the first minutes he jumps by 1
, then by 2
, and so on.

The direction of a jump is determined as follows: if the point where the grasshopper was before the jump has an even coordinate, the grasshopper jumps to the left, otherwise he jumps to the right.

For example, if after 18
 consecutive jumps he arrives at the point with a coordinate 7
, he will jump by a distance of 19
 to the right, since 7
 is an odd number, and will end up at a point 7+19=26
. Since 26
 is an even number, the next jump the grasshopper will make to the left by a distance of 20
, and it will move him to the point 26−20=6
.

Find exactly which point the grasshopper will be at after exactly n
 jumps.

Input
The first line of input contains an integer t
 (1≤t≤104
) — the number of test cases.

Each of the following t
 lines contains two integers x0
 (−1014≤x0≤1014
) and n
 (0≤n≤1014
) — the coordinate of the grasshopper's initial position and the number of jumps.

Output
Print exactly t
 lines. On the i
-th line print one integer — the answer to the i
-th test case — the coordinate of the point the grasshopper will be at after making n
 jumps from the point x0
.

Example
InputCopy
9
0 1
0 2
10 10
10 99
177 13
10000000000 987654321
-433494437 87178291199
1 0
-1 1
OutputCopy
-1
1
11
110
190
9012345679
-87611785637
1
0
Note
The first two test cases in the example correspond to the first two jumps from the point x0=0
.

Since 0
 is an even number, the first jump of length 1
 is made to the left, and the grasshopper ends up at the point 0−1=−1
.

Then, since −1
 is an odd number, a jump of length 2
 is made to the right, bringing the grasshopper to the point with coordinate
*/