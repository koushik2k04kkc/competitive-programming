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
    string s;
    cin >> n >> s;
    int z = 0;
    for (char c : s) if (c == '0') z++;
    int o = 0;
    for (int i = 0; i < z; ++i)
        if (s[i] == '1') o++;
    cout << o nl;
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
You are given a binary string∗
 s
 of length n
 and you are allowed to perform the following operation any number of times (including zero):

Choose 3
 indices 1≤i<j<k≤n
 and right shift or left shift the values on si
, sj
, sk
 cyclically.
For the binary string 110110, if we choose i=1
, j=2
, k=3
 and perform a right shift cyclically, the string becomes 011110; if we choose i=4
, j=5
, k=6
 and perform a left shift cyclically, the string becomes 110101.

Determine the minimum number of operations required to sort the given binary string.

∗
A binary string is a string that consists only of the characters 0 and 1.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤100
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (3≤n≤100
) — the length of the string.

The second line contains a binary string s
 of length n
.

Output
For each test case, output a single integer — the minimum number of operations required to sort the given binary string.

Example
InputCopy
4
3
001
4
0110
6
110100
6
101011
OutputCopy
0
1
2
1
Note
For the first test case, the given string is already sorted. So, no operations are needed.

For the second test case, we can choose i=1
, j=2
, k=4
 and perform a right shift cyclically. The string becomes equal to 0011, which is sorted.
*/