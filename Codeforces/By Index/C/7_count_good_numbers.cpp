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
    ll l, r;
    cin >> l >> r;
    ll total = r - l + 1;
    ll x = r, y = l - 1;
    ll badr = x / 2 + x / 3 + x / 5 + x / 7 - (x / 6 + x / 10 + x / 14 + x / 15 + x / 21 + x / 35) + (x / 30 + x / 42 + x / 70 + x / 105) - x / 210;
    ll badl = y / 2 + y / 3 + y / 5 + y / 7 - (y / 6 + y / 10 + y / 14 + y / 15 + y / 21 + y / 35) + (y / 30 + y / 42 + y / 70 + y / 105) - y / 210;
    cout << (total - (badr - badl)) nl;
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
A prime number is a positive integer that has exactly two divisors: 1
 and itself. The first several prime numbers are 2,3,5,7,11,…
.

Prime factorization of a positive integer is representing it as a product of prime numbers. For example:

the prime factorization of 111
 is 3⋅37
;
the prime factorization of 43
 is 43
;
the prime factorization of 12
 is 2⋅2⋅3
.
For every positive integer, its prime factorization is unique (if you don't consider the order of primes in the product).

We call a positive integer good if all primes in its factorization consist of at least two digits. For example:

343=7⋅7⋅7
 is not good;
111=3⋅37
 is not good;
1111=11⋅101
 is good;
43=43
 is good.
You have to calculate the number of good integers from l
 to r
 (endpoints included).

Input
The first line contains one integer t
 (1≤t≤103
) — the number of test cases.

Each test case consists of one line containing two integers l
 and r
 (2≤l≤r≤1018
).

Output
For each test case, print one integer — the number of good integers from l
 to r
.

Example
InputCopy
4
2 100
2 1000
13 37
2 1000000000000000000
OutputCopy
21
227
7
228571428571428570


*/