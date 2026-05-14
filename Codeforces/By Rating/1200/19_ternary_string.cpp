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
#define eb(v) v.rbegin(), v.rend()

typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    string s;
    cin >> s;
    vector<pair<char, int>> v;
    int a = -1;
    for (int i = 0; i < s.size();i++){
        if(a==-1||s[i]!=v[a].first){
            v.pb({s[i], 1});
            a++;
        } else{
            v[a].second++;
        }
    }
    int mn = INT32_MAX;
    for (int i = 1; i < a; i++)
    {
        if (v[i - 1].first != v[i + 1].first)
        {
            mn = min(mn, v[i].second + 2);
        }
    }
        if(mn==INT32_MAX){
            cout << 0 nl;
        } else{
            cout << mn nl;
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
You are given a string s
 such that each its character is either 1, 2, or 3. You have to choose the shortest contiguous substring of s
 such that it contains each of these three characters at least once.

A contiguous substring of string s
 is a string that can be obtained from s
 by removing some (possibly zero) characters from the beginning of s
 and some (possibly zero) characters from the end of s
.

Input
The first line contains one integer t
 (1≤t≤20000
) — the number of test cases.

Each test case consists of one line containing the string s
 (1≤|s|≤200000
). It is guaranteed that each character of s
 is either 1, 2, or 3.

The sum of lengths of all strings in all test cases does not exceed 200000
.

Output
For each test case, print one integer — the length of the shortest contiguous substring of s
 containing all three types of characters at least once. If there is no such substring, print 0
 instead.

Example
InputCopy
7
123
12222133333332
112233
332211
12121212
333333
31121
OutputCopy
3
3
4
4
0
0
4
Note
Consider the example test:

In the first test case, the substring 123 can be used.

In the second test case, the substring 213 can be used.

In the third test case, the substring 1223 can be used.

In the fourth test case, the substring 3221 can be used.

In the fifth test case, there is no character 3 in s
.

In the sixth test case, there is no character 1 in s
.

In the seventh test case, the substring 3112 can be used.
*/