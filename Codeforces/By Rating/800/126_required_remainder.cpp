#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<ll> vi;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    ll x, y, n;
    cin >> x >> y >> n;
    ll k = n - (n - y) % x;
    cout << k nl;
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
You are given three integers x,y
 and n
. Your task is to find the maximum integer k
 such that 0≤k≤n
 that kmodx=y
, where mod
 is modulo operation. Many programming languages use percent operator % to implement it.

In other words, with given x,y
 and n
 you need to find the maximum possible integer from 0
 to n
 that has the remainder y
 modulo x
.

You have to answer t
 independent test cases. It is guaranteed that such k
 exists for each test case.

Input
The first line of the input contains one integer t
 (1≤t≤5⋅104
) — the number of test cases. The next t
 lines contain test cases.

The only line of the test case contains three integers x,y
 and n
 (2≤x≤109; 0≤y<x; y≤n≤109
).

It can be shown that such k
 always exists under the given constraints.

Output
For each test case, print the answer — maximum non-negative integer k
 such that 0≤k≤n
 and kmodx=y
. It is guaranteed that the answer always exists.

Example
InputCopy
7
7 5 12345
5 0 4
10 5 15
17 8 54321
499999993 9 1000000000
10 5 187
2 0 999999999
OutputCopy
12339
0
15
54306
999999995
185
999999998
Note
In the first test case of the example, the answer is 12339=7⋅1762+5
 (thus, 12339mod7=5
). It is obvious that there is no greater integer not exceeding 12345
 which has the remainder 5
 modulo 7
.



*/