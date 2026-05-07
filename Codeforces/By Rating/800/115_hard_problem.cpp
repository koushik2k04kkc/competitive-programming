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
    ll m, a, b, c;
    cin >> m >> a >> b >> c;
    ll ans = 0, r = 0;
    ans += min(m, a);
    r += m - min(m, a);
    ans += min(m, b);
    r += m - min(m, b);
    ans += min(r, c);
    cout << ans nl;
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
Ball is the teacher in Paperfold University. The seats of his classroom are arranged in 2
 rows with m
 seats each.

Ball is teaching a+b+c
 monkeys, and he wants to assign as many monkeys to a seat as possible. Ball knows that a
 of them only want to sit in row 1
, b
 of them only want to sit in row 2
, and c
 of them have no preference. Only one monkey may sit in each seat, and each monkey's preference must be followed if it is seated.

What is the maximum number of monkeys that Ball can seat?

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases.

Each test case contains four integers m
, a
, b
, and c
 (1≤m,a,b,c≤108
).

Output
For each test case, output the maximum number of monkeys you can seat.

Example
InputCopy
5
10 5 5 10
3 6 1 1
15 14 12 4
1 1 1 1
420 6 9 69
OutputCopy
20
5
30
2
84
Note
In the second test case, 6
 monkeys want to sit in the front row, but only 3
 seats are available. The monkeys that have no preference and the monkeys who prefer sitting in the second row can sit in the second row together. Thus, the answer is 3+2=5
.



*/