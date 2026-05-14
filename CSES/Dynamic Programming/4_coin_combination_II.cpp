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
    ll n, x;
    cin >> n >> x;
    vi coins(n);
    fl(i, n) cin >> coins[i];
    vi dp(x + 1, 0);
    dp[0] = 1;
    for (auto c : coins)
    {
        for (int i = c; i <= x; i++)
        {
            dp[i] = (dp[i] + dp[i - c]) % MOD;
        }
    }
    cout << dp[x];
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
Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ordered ways you can produce a money sum x using the available coins.
For example, if the coins are \{2,3,5\} and the desired sum is 9, there are 3 ways:

2+2+5
3+3+3
2+2+2+3

Input
The first input line has two integers n and x: the number of coins and the desired sum of money.
The second line has n distinct integers c_1,c_2,\dots,c_n: the value of each coin.
Output
Print one integer: the number of ways modulo 10^9+7.
Constraints

1 \le n \le 100
1 \le x \le 10^6
1 \le c_i \le 10^6

Example
Input:
3 9
2 3 5

Output:
3
*/