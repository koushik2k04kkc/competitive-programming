#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "Yes\n";
#define pn cout << "No\n";
#define nl << "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<ll> vi;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if ((c >= a) && (d < b))
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
    solve();
    return 0;
}
/*
In AtCoder Country where Takahashi lives, there is a strange law that "a person who possesses
A or more candies must possess
B or more cookies."

Takahashi possesses
C candies and
D cookies. Determine whether Takahashi is violating this law.

Constraints
1≤A,B,C,D≤100
All input values are integers.
Input
The input is given from Standard Input in the following format:

A
B
C
D
Output
Print Yes if Takahashi is violating the law, and No otherwise.

Sample Input 1
Copy
10 20 30 40
Sample Output 1
Copy
No
In AtCoder Country, there is a law that "a person who possesses
10 or more candies must possess
20 or more cookies."

Takahashi possesses
30 candies and
40 cookies, so he is not violating this law.

Sample Input 2
Copy
10 20 30 4
Sample Output 2
Copy
Yes
Sample Input 3
Copy
100 100 1 1
Sample Output 3
Copy
No
*/