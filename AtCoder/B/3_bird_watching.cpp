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

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n, m;
    cin >> n >> m;
    vi sum(m + 1, 0);
    vi cnt(m + 1, 0);
    fl(i,n){
        int a, b;
        cin >> a >> b;
        sum[a] += b;
        cnt[a] += 1;
    }
    for (int k = 1; k <= m;k++){
        double ans = (double)sum[k] / cnt[k];
        cout << ans << fixed << setprecision(20) << nl;
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
N birds of
M types flying in the sky.
The bird types are numbered
1,2,…,M.
The
N birds are numbered
1,2,…,N, and bird
i is of type
A
i
​
  and has size
B
i
​
 .

For every
k=1,2,…,M, find the average size of the flying birds of type
k.
It is guaranteed that for every
k=1,2,…,M, there is at least one bird of type
k flying.

Constraints
1≤M≤N≤100
1≤A
i
​
 ≤M
1≤B
i
​
 ≤100
There exists at least one bird of type
k (
1≤k≤M ).
All input values are integers.
Input
The input is given from Standard Input in the following format:

N
M
A
1
​

B
1
​

A
2
​

B
2
​

⋮
A
N
​

B
N
​

Output
Output
M lines.
The
k-th line (
1≤k≤M ) should contain the average size of birds of type
k.
Your answer will be considered correct if the absolute or relative error from the true value is at most
10
−5
 .

Sample Input 1
Copy
10 5
4 92
1 16
3 77
4 99
2 89
3 8
1 40
5 56
1 40
4 77
Sample Output 1
Copy
32.00000000000000000000
89.00000000000000000000
42.50000000000000000000
89.33333333333333333333
56.00000000000000000000
The average size of birds of type
1 is
(16+40+40)/3=32.
The average size of birds of type
2 is
89.
The average size of birds of type
3 is
(77+8)/2=42.5.
The average size of birds of type
4 is
(92+99+77)/3≈89.3333.
The average size of birds of type
5 is
56.
*/