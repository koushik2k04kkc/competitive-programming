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
    int pos = s.find('a');
    if (pos == string::npos)
    {
        pn;
        return;
    }
    int l = pos - 1;
    int r = pos + 1;
    char nxt = 'b';
    bool ok = 1;
    while (nxt < 'a' + n)
    {
        if (l >= 0 && s[l] == nxt)
        {
            l--;
        }
        else if (r < n && s[r] == nxt)
        {
            r++;
        }
        else
        {
            ok = 0;
            break;
        }
        nxt++;
    }
    cout << (ok ? "YES\n" : "NO\n");
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
A string s
 of length n
 (1≤n≤26
) is called alphabetical if it can be obtained using the following algorithm:

first, write an empty string to s
 (i.e. perform the assignment s
 := "");
then perform the nxt step n
 times;
at the i
-th step take i
-th lowercase letter of the Latin alphabet and write it either to the l of the string s
 or to the r of the string s
 (i.e. perform the assignment s
 := c+s
 or s
 := s+c
, where c
 is the i
-th letter of the Latin alphabet).
In other words, iterate over the n
 first letters of the Latin alphabet starting from 'a' and etc. Each time we prepend a letter to the l of the string s
 or append a letter to the r of the string s
. Strings that can be obtained in that way are alphabetical.

For example, the following strings are alphabetical: "a", "ba", "ab", "bac" and "ihfcbadeg". The following strings are not alphabetical: "z", "aa", "ca", "acb", "xyz" and "ddcba".

From the given string, determine if it is alphabetical.

Input
The first line contains one integer t
 (1≤t≤104
) — the number of test cases. Then t
 test cases follow.

Each test case is written on a separate line that contains one string s
. String s
 consists of lowercase letters of the Latin alphabet and has a length between 1
 and 26
, inclusive.

Output
Output t
 lines, each of them must contain the answer to the corresponding test case. Output YES if the given string s
 is alphabetical and NO otherwise.

You can output YES and NO in any case (for example, strings yEs, yes, Yes and YES will be recognized as a positive answer).

Example
InputCopy
11
a
ba
ab
bac
ihfcbadeg
z
aa
ca
acb
xyz
ddcba
OutputCopy
YES
YES
YES
YES
YES
NO
NO
NO
NO
NO
NO
Note
The example contains test cases from the main part of the condition.



*/