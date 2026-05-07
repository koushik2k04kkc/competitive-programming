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
    ll a, b, c, m;
    cin >> a >> b >> c >> m;
    ll ab = lcm(a, b);
    ll ac = lcm(a, c);
    ll bc = lcm(b, c);
    ll abc = lcm(ab, c);
    ll x = m / a * 6 - m / ab * 3 - m / ac * 3 + m / abc * 2;
    ll y = m / b * 6 - m / ab * 3 - m / bc * 3 + m / abc * 2;
    ll z = m / c * 6 - m / ac * 3 - m / bc * 3 + m / abc * 2;
    cout << x << " " << y << " " << z << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/*
Alice, Bob, and Carol visit a spring to collect water. Alice visits every a
 days (on days a,2a,3a,…
), Bob visits every b
 days (on days b,2b,3b,…
), and Carol visits every c
 days (on days c,2c,3c,…
).

When only one person visits, they collect 6
 liters of water. If multiple people visit, the water is divided equally: two people take 3
 liters each, and three people take 2
 liters each.

Your task is to calculate how much water Alice, Bob, and Carol collect over m
 days, starting from day 1
.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The only line of each test case contains four integers a
, b
, c
, and m
 (1≤a,b,c≤106
; 1≤m≤1017
).

Output
For each test case, print three integers — the number of liters of water that Alice, Bob, and Carol collect over m
 days.

Example
InputCopy
4
2 1 3 10
1 1 8 5
6 20 15 1000
650650 1092 157437 100000000000000000
OutputCopy
14 38 8
15 15 0
881 236 281
845294870595 549337065358857 3774389867286
Note
Consider the first example:

on day 1
, only Bob visits the spring, and he collects 6
 liters;
on day 2
, Alice and Bob visit the spring, and they each collect 3
 liters;
on day 3
, Bob and Carol visit the spring, and they each collect 3
 liters;
on day 4
, Alice and Bob visit the spring, and they each collect 3
 liters;
on day 5
, only Bob visits the spring, and he collects 6
 liters;
on day 6
, Alice, Bob, and Carol visit the spring, and they each collect 2
 liters;
on day 7
, only Bob visits the spring, and he collects 6
 liters;
on day 8
, Alice and Bob visit the spring, and they each collect 3
 liters;
on day 9
, Bob and Carol visit the spring, and they each collect 3
 liters;
on day 10
, Alice and Bob visit the spring, and they each collect 3
 liters.


*/