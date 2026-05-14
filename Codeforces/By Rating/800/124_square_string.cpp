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
    string s;
    cin >> s;
    int n = s.size();
    if (n % 2 != 0)
    {
        pn;
        return;
    }
    string fst = s.substr(0, n / 2);
    string snd = s.substr(n / 2);
    if (fst == snd){
        py;
    } else{
        pn;
    }
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
A string is called square if it is some string written twice in a row. For example, the strings "aa", "abcabc", "abab" and "baabaa" are square. But the strings "aaa", "abaaab" and "abcdabc" are not square.

For a given string s
 determine if it is square.

Input
The first line of input data contains an integer t
 (1≤t≤100
) —the number of test cases.

This is followed by t
 lines, each containing a description of one test case. The given strings consist only of lowercase Latin letters and have lengths between 1
 and 100
 inclusive.

Output
For each test case, output on a separate line:

YES if the string in the corresponding test case is square,
NO otherwise.
You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recognized as a positive response).

Example
InputCopy
10
a
aa
aaa
aaaa
abab
abcabc
abacaba
xxyy
xyyx
xyxy
OutputCopy
NO
YES
NO
YES
YES
YES
NO
NO
NO
YES


*/