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
#define eb(v) v.end(), v.begin()

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
    int x, y;
    cin >> x >> y;
    int cnt = 0;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            int sum = i + j;
            int dif = abs(i - j);
            if (sum >= x || dif >= y)
            {
                cnt++;
            }
        }
    }
    double ans = static_cast<double>(cnt) / 36.0;
    cout << fixed << setprecision(30) << ans nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // ll t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();
    return 0;
}
/*
Two dice, each with six faces
1,2,3,4,5,6, are rolled. Find the probability that at least one of the following two conditions holds:

The sum of the two outcomes is at least
X.
The absolute difference of the two outcomes is at least
Y.
Each face of each die is equally likely, and the two dice are independent.

Constraints
2≤X≤13
0≤Y≤6
All input values are integers.
Input
The input is given from Standard Input in the following format:

X
Y
Output
Output the probability that the two outcomes satisfy at least one of the two conditions. Your answer is accepted if its absolute error from the true value is at most
10
−9
 .

Sample Input 1
Copy
9 3
Sample Output 1
Copy
0.555555555555555555555555555555
Let
(x,y) denote the event that the dice show
x and
y.

The sum is at least
9 for
(3,6),(4,5),(4,6),(5,4),(5,5),(5,6),(6,3),(6,4),(6,5),(6,6).
The difference is at least
3 for
(1,4),(1,5),(1,6),(2,5),(2,6),(3,6),(4,1),(5,1),(5,2),(6,1),(6,2),(6,3).
At least one of these conditions holds for the following
20 pairs:
(1,4),(1,5),(1,6),(2,5),(2,6),(3,6),(4,1),(4,5),(4,6),(5,1),(5,2),(5,4),(5,5),(5,6),(6,1),(6,2),(6,3),(6,4),(6,5),(6,6).

Thus, the answer is
36
20
​
 =
9
5
​
 =0.5555555555….

Because an absolute error of at most
10
−9
  is allowed, outputs such as 0.5555555565 or 0.55555555456789 are accepted.

Sample Input 2
Copy
13 6
Sample Output 2
Copy
0
Neither the sum of two dice can be
13 or greater, nor can their difference be
6 or greater.

Thus, the answer is
0.

Sample Input 3
Copy
10 3
Sample Output 3
Copy
0.5

*/