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
    int a;
    cin >> a;
    if (102 <= a && a <= 109 || 1010 <= a && a <= 1099)
    {
        py;
    }
    else
    {
        pn;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
Dmitry wrote down t
 integers on the board, and that is good. He is sure that he lost an important integer n
 among them, and that is bad.

The integer n
 had the form 10^x
 (x≥2
), where the symbol '^
' denotes exponentiation.. Something went wrong, and Dmitry missed the symbol '^
' when writing the important integer. For example, instead of the integer 105
, he would have written 105
, and instead of 1019
, he would have written 1019
.

Dmitry wants to understand which of the integers on the board could have been the important integer and which could not.

Input
The first line of the input contains one integer t
 (1≤t≤104
) — the number of integers on the board.

The next t
 lines each contain an integer a
 (1≤a≤10000
) — the next integer from the board.

Output
For each integer on the board, output "YES" if it could have been the important integer and "NO" otherwise.

You may output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.

Example
InputCopy
7
100
1010
101
105
2033
1019
1002
OutputCopy
NO
YES
NO
YES
NO
YES
NO


*/