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
    int a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << 0 nl;
        return;
    }
    int t = a;
    ll bits_a = 0, bits_b = 0, cnt = 0;
    while (t)
    {
        cnt++;
        t >>= 1;
    }
    bits_a = max(1LL, cnt);
    cnt = 0;
    t = b;
    while (t)
    {
        cnt++;
        t >>= 1;
    }
    bits_b = max(1LL, cnt);
    if (bits_b > bits_a)
    {
        cout << -1 nl;
        return;
    }
    if ((a ^ b) <= a)
    {
        cout << 1 nl;
        cout << (a ^ b) nl;
    }
    else
    {
        int m = (1 << bits_a) - 1;
        cout << 2 nl;
        cout << (a ^ m) << " " << (m ^ b) nl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
You are given two integers a
 and b
. You are allowed to perform the following operation any number of times (including zero):

choose any integer x
 such that 0≤x≤a
 (the current value of a
, not initial),
set a:=a⊕x
. Here, ⊕
 represents the bitwise XOR operator.
After performing a sequence of operations, you want the value of a
 to become exactly b
.

Find a sequence of at most 100
 operations (values of x
 used in each operation) that transforms a
 into b
, or report that it is impossible.

Note that you are not required to find the minimum number of operations, but any valid sequence of at most 100
 operations.

Input
The first line of input contains a single integer t
 (1≤t≤1000
) — the number of test cases.

Each test case contains two integers a
 and b
 (1≤a,b≤109
).

Output
For each test case, if it is impossible to obtain b
 from a
 using the allowed operations, print a single line containing −1
.

Otherwise, on the first line print a single integer k
 (0≤k≤100
) — the number of operations. On the second line print k
 integers (x1,x2,…,xk
) — the chosen values of x
 in the order you apply them.

If there are multiple valid sequences, you may print any one of them.

Example
InputCopy
6
9 6
13 13
292 929
405 400
998 244
244 353
OutputCopy
2
7 8
0
-1
1
5
2
25 779
-1
Note
For the first test case,

choose x=7
, now a
 becomes equal to 9⊕7=14
.
choose x=8
, now a
 becomes equal to 14⊕8=6
.
Thus, we can make a=b
.
For the fourth test case, choosing x=5
 makes a=b
.



*/