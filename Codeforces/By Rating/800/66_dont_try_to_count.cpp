#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

typedef unsigned long long int ull;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pi;
typedef pair<char, ll> pci;
typedef vector<pi> vii;
typedef map<ll, ll> mi;
typedef map<char, ll> mci;
typedef set<ll> seti;
typedef set<char> setc;
typedef unordered_set<ll> useti;
typedef unordered_set<char> usetc;

// Koushik Kumar Chakraborty (●'◡'●)

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    int cnt = 0;
    if (n == 1 && m == 1)
    {
        if (x == s)
        {
            cout << cnt nl;
            return;
        }
        else
        {
            cout << "-1" nl;
            return;
        }
    }
    bool valid = false;
    for (int i = 0; i <= 5; i++)
    {
        if (x.size() >= s.size())
        {
            for (int j = 0; j <= x.size() - m; j++)
            {
                if (x[j] == s[0])
                {
                    string str = x.substr(j, m);
                    if (str == s)
                    {
                        valid = true;
                        break;
                    }
                }
            }
            if (valid)
            {
                break;
            }
        }
        x = x + x;
        cnt++;
    }
    if (valid)
    {
        cout << cnt nl;
    }
    else
    {
        cout << "-1" nl;
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
Given a string x
 of length n
 and a string s
 of length m
 (n⋅m≤25
), consisting of lowercase Latin letters, you can apply any number of operations to the string x
.

In one operation, you append the current value of x
 to the end of the string x
. Note that the value of x
 will change after this.

For example, if x=
"aba", then after applying operations, x
 will change as follows: "aba" →
 "abaaba" →
 "abaabaabaaba".

After what minimum number of operations s
 will appear in x
 as a substring? A substring of a string is defined as a contiguous segment of it.

Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two numbers n
 and m
 (1≤n⋅m≤25
) — the lengths of strings x
 and s
, respectively.

The second line of each test case contains the string x
 of length n
.

The third line of each test case contains the string s
 of length m
.

Output
For each test case, output a single number — the minimum number of operations after which s
 will appear in x
 as a substring. If this is not possible, output −1
.

Example
InputCopy
12
1 5
a
aaaaa
5 5
eforc
force
2 5
ab
ababa
3 5
aba
ababa
4 3
babb
bbb
5 1
aaaaa
a
4 2
aabb
ba
2 8
bk
kbkbkbkb
12 2
fjdgmujlcont
tf
2 2
aa
aa
3 5
abb
babba
1 19
m
mmmmmmmmmmmmmmmmmmm
OutputCopy
3
1
2
-1
1
0
1
3
1
0
2
5
Note
In the first test case of the example, after 2
 operations, the string will become "aaaa", and after 3
 operations, it will become "aaaaaaaa", so the answer is 3
.

In the second test case of the example, after applying 1
 operation, the string will become "eforceforc
", where the substring is highlighted in red.

In the fourth test case of the example, it can be shown that it is impossible to obtain the desired string as a substring.
*/