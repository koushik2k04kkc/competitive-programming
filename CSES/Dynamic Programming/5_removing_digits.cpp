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
    vi dp(n + 1, 1e9);
    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        string s = to_string(i);
        for (char ch : s)
        {
            int d = ch - '0';
            if (d > 0)
            {
                dp[i] = min(dp[i],1+ dp[i - d]);
            }
        }
    }
    cout << dp[n];
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
greedy solution :
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int steps = 0;
    while (n) {
        int number = n;
        int max_digit = 0;
        while (number) {
            int digit = number % 10;
            max_digit = max(max_digit, digit);
            number /= 10;
        }
        n -= max_digit;
        steps++;
    }

    cout << steps << "\n";
}
*/

/*
You are given an integer n. On each step, you may subtract one of the digits from the number.
How many steps are required to make the number equal to 0?
Input
The only input line has an integer n.
Output
Print one integer: the minimum number of steps.
Constraints

1 \le n \le 10^6

Example
Input:
27

Output:
5

Explanation: An optimal solution is 27 \rightarrow 20 \rightarrow 18 \rightarrow 10 \rightarrow 9 \rightarrow 0.
*/