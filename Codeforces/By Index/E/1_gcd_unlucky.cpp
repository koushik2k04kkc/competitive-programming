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
    vi p(n), s(n), a(n);
    fl(i, n) cin >> p[i];
    fl(i, n) cin >> s[i];
    fl(i, n)
    {
        ll g = __gcd(p[i], s[i]);
        a[i] = (p[i] / g) * s[i]; // LCM(p[i], s[i])
    }
    bool ans = 1;
    ll cur = 0;
    fl(i, n)
    {
        cur = (i == 0 ? a[i] : __gcd(cur, a[i]));
        if (cur != p[i])
        {
            ans = 0;
            break;
        }
    }
    cur = 0;
    per(i, n -1, 0)
    {
        cur = (i == n - 1 ? a[i] : __gcd(cur, a[i]));
        if (cur != s[i])
        {
            ans = 0;
            break;
        }
    }
    if (ans)
        py else pn
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
Two arrays p
 and s
 of length n
 are given, where p
 is the prefix GCD∗
 of some array a
, and s
 is the suffix GCD of the same array a
. In other words, if the array a
 existed, then for each 1≤i≤n
, the following equalities would hold both:

pi=gcd(a1,a2,…,ai)
si=gcd(ai,ai+1,…,an)
.
Determine whether there exists such an array a
 for which the given arrays p
 and s
 can be obtained.
∗
gcd(x,y)
 denotes the greatest common divisor (GCD) of integers x
 and y
.

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases.

Each test case consists of three lines:

The first line of each test case contains a single integer n
 (1≤n≤105
) — the length of the array.

The second line of each test case contains n
 integers p1,p2,…,pn
 (1≤pi≤109
) — the elements of the array.

The third line of each test case contains n
 integers s1,s2,…,sn
 (1≤si≤109
) — the elements of the array.

It is guaranteed that the sum of all n
 across all test cases does not exceed 105
.

Output
For each test case, output "Yes" (without quotes) if there exists an array a
 for which the given arrays p
 and s
 can be obtained, and "No" (without quotes) otherwise.

You may output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.

Example
InputCopy
5
6
72 24 3 3 3 3
3 3 3 6 12 144
3
1 2 3
4 5 6
5
125 125 125 25 25
25 25 25 25 75
4
123 421 282 251
125 1981 239 223
3
124 521 125
125 121 121
OutputCopy
YES
NO
YES
NO
NO
Note
For the first test case, a possible array is: [72, 24, 3, 6, 12, 144
].

For the second test case, it can be shown that such arrays do not exist.

For the third test case, there exists an array: [125, 125, 125, 25, 75
].



*/