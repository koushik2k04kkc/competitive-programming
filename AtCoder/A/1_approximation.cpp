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
    int a, b;
    cin >> a >> b;
    double div = static_cast<double>(a) / b;
    int result = round(div);
    cout << result nl;
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
You are given a positive integer
A and a positive odd integer
B.

Output the integer whose difference from the real number
B
A
​
  is the smallest.

It can be proved that, under the constraints, such an integer is unique.

Constraints
1≤A≤407
1≤B≤407
B is odd.
All input values are integers.
Input
The input is given from Standard Input in the following format:

A
B
Output
Output the integer that minimizes the difference from
B
A
​
 .

Sample Input 1
Copy
4 7
Sample Output 1
Copy
1
We have
B
A
​
 =
7
4
​
 =0.5714…. The difference between
B
A
​
  and
1 is
7
3
​
 =0.4285…, and no integer has a smaller difference.

Thus, print 1.

Sample Input 2
Copy
407 29
Sample Output 2
Copy
14
We have
B
A
​
 =
29
407
​
 =14.0344…. The difference between
B
A
​
  and
14 is
29
1
​
 =0.0344…, and no integer has a smaller difference.

Thus, print 14.

Sample Input 3
Copy
22 11
Sample Output 3
Copy
2
B
A
​
  may itself be an integer.
*/
