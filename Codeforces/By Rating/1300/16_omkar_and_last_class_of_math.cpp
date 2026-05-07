#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int x = n / i;
            cout << x << " " << n - x nl;
            return;
        }
    }
    cout << 1 << " " << n - 1 nl;
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
In Omkar's last class of math, he learned about the least common multiple, or LCM
. LCM(a,b)
 is the smallest positive integer x
 which is divisible by both a
 and b
.

Omkar, having a laudably curious mind, immediately thought of a problem involving the LCM
 operation: given an integer n
, find positive integers a
 and b
 such that a+b=n
 and LCM(a,b)
 is the minimum value possible.

Can you help Omkar solve his ludicrously challenging math problem?

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤10
). Description of the test cases follows.

Each test case consists of a single integer n
 (2≤n≤109
).

Output
For each test case, output two positive integers a
 and b
, such that a+b=n
 and LCM(a,b)
 is the minimum possible.

Example
InputCopy
3
4
6
9
OutputCopy
2 2
3 3
3 6
Note
For the first test case, the numbers we can choose are 1,3
 or 2,2
. LCM(1,3)=3
 and LCM(2,2)=2
, so we output 2 2
.

For the second test case, the numbers we can choose are 1,5
, 2,4
, or 3,3
. LCM(1,5)=5
, LCM(2,4)=4
, and LCM(3,3)=3
, so we output 3 3
.

For the third test case, LCM(3,6)=6
. It can be shown that there are no other pairs of numbers which sum to 9
 that have a lower LCM
.



*/