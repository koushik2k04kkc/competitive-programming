#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define be(v) v.begin(), v.end()
#define eb(v) v.end(), v.begin()

typedef unsigned long long int ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;
typedef unordered_set<ll> usll;
typedef unordered_set<char> usc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n;
    cin >> n;
    int sq = ceil(sqrt(n));
    if (sq * sq == n)
    {
        cout << 0 << ' ' << sq << "\n";
    }
    else
    {
        cout << "-1\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/*
One can notice the following remarkable mathematical fact: the number 2025
 can be represented as (20+25)2
.

You are given a year represented by a string s
, consisting of exactly 4
 characters. Thus, leading zeros are allowed in the year representation. For example, "0001", "0185", "1375" are valid year representations. You need to express it in the form (a+b)2
, where a
 and b
 are non-negative integers, or determine that it is impossible.

For example, if s
 = "0001", you can choose a=0
, b=1
, and write the year as (0+1)2=1
.

Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases.

The following lines describe the test cases.

The only line of each test case contains a string s
, consisting of exactly 4
 characters. Each character is a digit from 0
 to 9
.

Output
On a separate line for each test case, output:

Two numbers a
 and b
 (a,b≥0
) such that (a+b)2=s
, if they exist. If there are multiple suitable pairs, you may output any of them.
The number −1
 otherwise.
Example
InputCopy
5
0001
1001
1000
4900
2025
OutputCopy
0 1
-1
-1
34 36
20 25


*/