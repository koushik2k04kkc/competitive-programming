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
    string s, ans = "";
    cin >> s;
    string ch[10] = {
        "", "", "2", "3", "322", "5", "53", "7", "7222", "7332"};
    fl(i,s.size())
    {
        int d = s[i] - '0';
        ans += ch[d];
    }
    sort(all(ans));
    reverse(all(ans));
    cout << ans nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
/*
Drazil is playing a math game with Varda.

Let's define  for positive integer x as a product of factorials of its digits. For example, .

First, they choose a decimal number a consisting of n digits that contains at least one digit larger than 1. This number may possibly start with leading zeroes. Then they should find maximum positive number x satisfying following two conditions:

1. x doesn't contain neither digit 0 nor digit 1.

2.  = .

Help friends find such number.

Input
The first line contains an integer n (1 ≤ n ≤ 15) — the number of digits in a.

The second line contains n digits of a. There is at least one digit in a that is larger than 1. Number a may possibly contain leading zeroes.

Output
Output a maximum possible integer satisfying the conditions above. There should be no zeroes and ones in this number decimal representation.

Examples
InputCopy
4
1234
OutputCopy
33222
InputCopy
3
555
OutputCopy
555
Note
In the first case,


*/