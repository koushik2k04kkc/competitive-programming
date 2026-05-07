#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<ll> vi;
const ll MOD = (ll)1e9 + 7;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int mx = 0;
    fl(i,n)
    {
        string rot = s.substr(i) + s.substr(0, i);
        int cnt = 1;
        for (int j = 1; j < n; j++)
        {
            if (rot[j] != rot[j - 1])
            {
                cnt++;
            }
        }

        mx = max(mx, cnt);
    }
    cout << mx << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
Define a block in a string as a contiguous substring of characters of the same type that cannot be extended either to the left or the right. For example, in the string aabcccdaa, there are five blocks:

aa (1
-st to 2
-nd characters)
b (3
-rd character)
ccc (4
-th to 6
-th characters)
d (7
-th character)
aa (8
-th to 9
-th characters).
You are playing a game where you are given a string s
 of length n
. You can cyclically rotate∗
 the string however you want. Your score is then calculated as the number of blocks in the final string. Please find the maximum score possible.

∗
Formally, choose an index 1≤i≤n
, and replace the string s1s2…sn
 with the string si+1si+2…sns1s2…si
. For example, the string abcde can be rotated to string deabc by choosing i=3
.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤100
).

The second line of each test case contains the string s
 of length n
.

Strings s
 consist of lowercase Latin characters only.

Output
For each testcase, output a single integer denoting the maximum score you can achieve.

Example
InputCopy
4
4
abcd
4
abbc
4
abba
6
abbccc
OutputCopy
4
4
3
4
Note
In the first test case, score of the original string abcd is 4
. It can be shown that a score greater than 4
 cannot be achieved.

In the second test case, cyclically rotating the string by 2
 positions will give us string bcab. Score of this string is 4
. It can be shown that a score greater than 4
 cannot be achieved.



*/