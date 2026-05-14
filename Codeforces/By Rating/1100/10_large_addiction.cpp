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
    string s;
    cin >> s;
    int n = s.size();
    if (s[0] != '1' || s[n - 1] == '9')
    {
        pn;
        return;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (s[i] == '0')
        {
            pn;
            return;
        }
    }
    py;
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
A digit is large if it is between 5
 and 9
, inclusive. A positive integer is large if all of its digits are large.

You are given an integer x
. Can it be the sum of two large positive integers with the same number of digits?

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The only line of each test case contains a single integer x
 (10≤x≤1018
).

Output
For each test case, output YES
 if x
 satisfies the condition, and NO
 otherwise.

You can output YES
 and NO
 in any case (for example, strings yES
, yes
, and Yes
 will be recognized as a positive response).

Example
InputCopy
11
1337
200
1393938
1434
98765432123456789
11111111111111111
420
1984
10
69
119
OutputCopy
YES
NO
YES
YES
NO
YES
NO
YES
YES
NO
NO
Note
In the first test case, we can have 658+679=1337
.

In the second test case, it can be shown that no numbers of equal length and only consisting of large digits can add to 200
.

In the third test case, we can have 696969+696969=1393938
.

In the fourth test case, we can have 777+657=1434
.



*/