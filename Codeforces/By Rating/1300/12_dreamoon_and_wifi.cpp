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

ll nCr(int n, int r)
{
    if (r > n || r < 0)
        return 0;
    ll res = 1;
    rep(i,1,r)
    {
        res = res * (n - i + 1) / i;
    }
    return res;
}

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int target = 0, current = 0, ajana = 0;
    for (char c : s1)
        target += (c == '+' ? 1 : -1);
    for (char c : s2)
    {
        if (c == '+')
            current++;
        else if (c == '-')
            current--;
        else
            ajana++;
    }
    int diff = target - current;
    if ((diff + ajana) % 2 != 0 || abs(diff) > ajana)
    {
        cout << fixed << setprecision(12) << 0.0 nl;
        return;
    }
    int k = (diff + ajana) / 2;
    ll upay = nCr(ajana, k);
    double mot = pow(2, ajana);
    double p = upay / mot;
    cout << fixed << setprecision(12) << p nl;

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
    Dreamoon is standing at the position 0 on a number line. Drazil is sending a list of commands through Wi-Fi to Dreamoon's smartphone and Dreamoon follows them.

Each command is one of the following two types:

Go 1 unit towards the positive direction, denoted as '+'
Go 1 unit towards the negative direction, denoted as '-'
But the Wi-Fi condition is so poor that Dreamoon's smartphone reports some of the commands can't be recognized and Dreamoon knows that some of them might even be wrong though successfully recognized. Dreamoon decides to follow every recognized command and toss a fair coin to decide those unrecognized ones (that means, he moves to the 1 unit to the negative or positive direction with the same probability 0.5).

You are given an original list of commands sent by Drazil and list received by Dreamoon. What is the probability that Dreamoon ends in the position originally supposed to be final by Drazil's commands?

Input
The first line contains a string s1 — the commands Drazil sends to Dreamoon, this string consists of only the characters in the set {'+', '-'}.

The second line contains a string s2 — the commands Dreamoon's smartphone recognizes, this string consists of only the characters in the set {'+', '-', '?'}. '?' denotes an unrecognized command.

Lengths of two strings are equal and do not exceed 10.

Output
Output a single real number corresponding to the probability. The answer will be considered correct if its relative or absolute error doesn't exceed 10 - 9.

Examples
InputCopy
++-+-
+-+-+
OutputCopy
1.000000000000
InputCopy
+-+-
+-??
OutputCopy
0.500000000000
InputCopy
+++
??-
OutputCopy
0.000000000000
Note
For the first sample, both s1 and s2 will lead Dreamoon to finish at the same position  + 1.

For the second sample, s1 will lead Dreamoon to finish at position 0, while there are four possibilites for s2: {"+-++", "+-+-", "+--+", "+---"} with ending position {+2, 0, 0, -2} respectively. So there are 2 correct cases out of 4, so the probability of finishing at the correct position is 0.5.

For the third sample, s2 could only lead us to finish at positions {+1, -1, -3}, so the probability to finish at the correct position  + 3 is 0.
    */