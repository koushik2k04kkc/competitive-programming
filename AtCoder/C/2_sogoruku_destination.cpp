#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<ll> vi;
const ll MOD = (ll)1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vi a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    vi ans(n + 1, 0);
    vi visit(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        if (ans[i] != 0)  continue;
        int cur = i;
        vi path;
        while (ans[cur] == 0 && visit[cur] == 0)
        {
            visit[cur] = i;
            path.pb(cur);
            cur = a[cur];
        }
        int result;
        if (ans[cur] != 0)
        {
            result = ans[cur];
        }
        else
        {
            result = cur;
        }
        for (int node : path)
        {
            ans[node] = result;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
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
There are
N cells, cell
1, cell
2,…, cell
N, arranged in a line. Cell
i has an integer
A
i
​
  (i≤A
i
​
 ≤N) written on it.

For each of
s=1,2,…,N, solve the following problem.

Initially, place a piece on cell
s. After performing the operation "let
x be the integer written on the cell where the piece is placed, and then move the piece to cell
x"
10
100
  times, output the number of the cell where the piece is placed.
Constraints
1≤N≤5×10
5

i≤A
i
​
 ≤N (1≤i≤N)
All input values are integers.
Input
The input is given from Standard Input in the following format:

N
A
1
​

A
2
​

…
A
N
​

Output
Output the answers for
s=1,2,…,N in this order on a single line, separated by spaces.

Sample Input 1
Copy
7
2 4 7 5 5 6 7
Sample Output 1
Copy
5 5 7 5 5 6 7
For
s=1, the piece moves as shown in the following figure.



When the piece is placed on cell
5, the operation does not move the piece, so the answer for
s=1 is
5.

Sample Input 2
Copy
5
1 2 3 4 5
Sample Output 2
Copy
1 2 3 4 5
It is possible that the piece never moves.

Sample Input 3
Copy
15
11 3 10 7 15 10 10 11 11 13 11 12 14 14 15
Sample Output 3
Copy
11 14 14 14 15 14 14 11 11 14 11 12 14 14 15

*/