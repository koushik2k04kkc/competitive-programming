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
    string s, t;
    cin >> s >> t;
    int n = s.size(), m = t.size();
    int j = 0;
    string res = s;
    for (int i = 0; i < n && j < m; ++i)
    {
        if (res[i] == '?' || res[i] == t[j])
        {
            res[i] = t[j];
            j++;
        }
    }
    if (j < m)
    {
        pn;
    }
    else
    {
        for (char &c : res)
        {
            if (c == '?')
                c = 'a';
        }
        py;
        cout << res nl;
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
Slavic has a very tough exam and needs your help in order to pass it. Here is the question he is struggling with:

There exists a string s
, which consists of lowercase English letters and possibly zero or more "?".

Slavic is asked to change each "?" to a lowercase English letter such that string t
 becomes a subsequence (not necessarily continuous) of the string s
.

Output any such string, or say that it is impossible in case no string that respects the conditions exists.

Input
The first line contains a single integer T
 (1≤T≤104
) — the number of test cases.

The first line of each test case contains a single string s
 (1≤|s|≤2⋅105
, and s
 consists only of lowercase English letters and "?"-s)  – the original string you have.

The second line of each test case contains a single string t
 (1≤|t|≤|s|
, and t
 consists only of lowercase English letters)  – the string that should be a subsequence of string s
.

The sum of |s|
 over all test cases doesn't exceed 2⋅105
, where |x|
 denotes the length of the string x
.

Output
For each test case, if no such string exists as described in the statement, output "NO" (without quotes).

Otherwise, output "YES" (without quotes). Then, output one line — the string that respects all conditions.

You can output "YES" and "NO" in any case (for example, strings "yEs", "yes", and "Yes" will be recognized as a positive response).

If multiple answers are possible, you can output any of them.

Example
InputCopy
5
?????
xbx
ab??e
abcde
ayy?x
a
ab??e
dac
paiu
mom
OutputCopy
YES
xabax
YES
abcde
YES
ayyyx
NO
NO


*/