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
    ll n;
    cin >> n;
    vector<string> g(n);
    fl(i, n) cin >> g[i];
    vector<vector<long long>> dp(n, vector<long long>(n, 0));
    if(g[0][0]=='*'){
        cout << 0 << nl;
        return;
    }
    dp[0][0] = 1;
    fl(i,n){
        fl(j,n){
            if(g[i][j]=='*'){
                dp[i][j] = 0;
                continue;
            }
            if(i>0){
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
            }
            if(j>0){
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
            }
        }
    }
    cout << dp[n - 1][n - 1] << nl;
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
Consider an n \times n grid whose squares may have traps. It is not allowed to move to a square with a trap.
Your task is to calculate the number of paths from the upper-left square to the lower-right square. You can only move right or down.
Input
The first input line has an integer n: the size of the grid.
After this, there are n lines that describe the grid. Each line has n characters: . denotes an empty cell, and * denotes a trap.
Output
Print the number of paths modulo 10^9+7.
Constraints

1 \le n \le 1000

Example
Input:
4
....
.*..
...*
*...

Output:
3
*/