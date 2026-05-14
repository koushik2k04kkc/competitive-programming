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
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

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
    int cnt = 0, cnt0 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            if (i && s[i - 1] == '0')
                cnt0++;
            else
                cnt0 = 1;
        }
        else
        {
            cnt++;
            cnt0 = 0;
        }
    }
    cout << cnt - 1 + cnt0 nl;
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
The cost of a positive integer n
 is defined as the result of dividing the number n
 by the sum of its digits.

For example, the cost of the number 104
 is 1041+0+4=20.8
, and the cost of the number 111
 is 1111+1+1=37
.

You are given a positive integer n
 that does not contain leading zeros. You can remove any number of digits from the number n
 (including none) so that the remaining number contains at least one digit and is strictly greater than zero. The remaining digits cannot be rearranged. As a result, you may end up with a number that has leading zeros.

For example, you are given the number 103554
. If you decide to remove the digits 1
, 4
, and one digit 5
, you will end up with the number 035
, whose cost is 0350+3+5=4.375
.

What is the minimum number of digits you need to remove from the number so that its cost becomes the minimum possible?

Input
The first line contains an integer t
 (1≤t≤1000
) — the number of test cases.

The only line of each test case contains a positive integer n
 (1≤n<10100
) without leading zeros.

Output
For each test case, output one integer on a new line — the number of digits that need to be removed from the number so that its cost becomes minimal.

Example
InputCopy
4
666
13700
102030
7
OutputCopy
2
4
3
0

,
*/