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
    ll x, y, n;
    cin >> x >> y >> n;
    x = ((x % MOD) + MOD) % MOD;
    y = ((y % MOD) + MOD) % MOD;
    int r = n % 6;
    ll ans;
    if (r == 1)
        ans = x;
    else if (r == 2)
        ans = y;
    else if (r == 3)
        ans = (y - x + MOD) % MOD;
    else if (r == 4)
        ans = (-x + MOD) % MOD;
    else if (r == 5)
        ans = (-y + MOD) % MOD;
    else
        ans = (x - y + MOD) % MOD;
    cout << ans << nl;
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
Jzzhu has invented a kind of sequences, they meet the following property:


You are given x and y, please calculate fn modulo 1000000007 (109 + 7).

Input
The first line contains two integers x and y (|x|, |y| ≤ 109). The second line contains a single integer n (1 ≤ n ≤ 2·109).

Output
Output a single integer representing fn modulo 1000000007 (109 + 7).

Examples
InputCopy
2 3
3
OutputCopy
1
InputCopy
0 -1
2
OutputCopy
1000000006
Note
In the first sample, f2 = f1 + f3, 3 = 2 + f3, f3 = 1.

In the second sample, f2 =  - 1;  - 1 modulo (109 + 7) equals (109 + 6).


*/