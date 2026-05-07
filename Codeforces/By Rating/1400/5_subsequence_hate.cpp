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
    string s;
    cin >> s;
    int n = s.size();
    int zero = 0, one = 0;
    fl(i,n)
    {
        if (s[i] == '0')
            zero++;
        else
            one++;
    }
    int d_zero = 0, d_one = 0;
    int mn = min(zero, one);
    fl(i,n)
    {
        if (s[i] == '0')
            d_zero++;
        else
            d_one++;
        int zeroto1 = d_one + (zero - d_zero);
        int oneto0 = d_zero + (one - d_one);
        mn = min(mn, min(zeroto1, oneto0));
    }
    cout << mn nl;
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
Shubham has a binary string s
. A binary string is a string containing only characters "0" and "1".

He can perform the following operation on the string any amount of times:

Select an index of the string, and flip the character at that index. This means, if the character was "0", it becomes "1", and vice versa.
A string is called good if it does not contain "010" or "101" as a subsequence  — for instance, "1001" contains "101" as a subsequence, hence it is not a good string, while "1000" doesn't contain neither "010" nor "101" as subsequences, so it is a good string.

What is the minimum number of operations he will have to perform, so that the string becomes good? It can be shown that with these operations we can make any string good.

A string a
 is a subsequence of a string b
 if a
 can be obtained from b
 by deletion of several (possibly, zero or all) characters.

Input
The first line of the input contains a single integer t
 (1≤t≤100)
 — the number of test cases.

Each of the next t
 lines contains a binary string s
 (1≤|s|≤1000)
.

Output
For every string, output the minimum number of operations required to make it good.

Example
InputCopy
7
001
100
101
010
0
1
001100
OutputCopy
0
0
1
1
0
0
2
Note
In test cases 1
, 2
, 5
, 6
 no operations are required since they are already good strings.

For the 3
rd test case: "001" can be achieved by flipping the first character  — and is one of the possible ways to get a good string.

For the 4
th test case: "000" can be achieved by flipping the second character  — and is one of the possible ways to get a good string.

For the 7
th test case: "000000" can be achieved by flipping the third and fourth characters  — and is one of the possible ways to get a good string.



*/