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
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

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
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi leftcnt(26, 0), rightcnt(26, 0);
    for (char c : s)
        rightcnt[c - 'a']++;
    int left = 0, right = 0;
    for (int i = 0; i < 26; i++)
    {
        if (rightcnt[i] > 0)
            right++;
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int idx = s[i] - 'a';
        leftcnt[idx]++;
        if (leftcnt[idx] == 1)
            left++;
        rightcnt[idx]--;
        if (rightcnt[idx] == 0)
            right--;
        ans = max(ans, left + right);
    }
    cout << ans nl;
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
Let's denote the f(x)
 function for a string x
 as the number of distinct characters that the string contains. For example f(abc)=3
, f(bbbbb)=1
, and f(babacaba)=3
.

Given a string s
, split it into two non-empty strings a
 and b
 such that f(a)+f(b)
 is the maximum possible. In other words, find the maximum possible value of f(a)+f(b)
 such that a+b=s
 (the concatenation of string a
 and string b
 is equal to string s
).

Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n
 (2≤n≤2⋅105
) — the length of the string s
.

The second line contains the string s
, consisting of lowercase English letters.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output a single integer  — the maximum possible value of f(a)+f(b)
 such that a+b=s
.

Example
InputCopy
5
2
aa
7
abcabcd
5
aaaaa
10
paiumoment
4
aazz
OutputCopy
2
7
2
10
3
Note
For the first test case, there is only one valid way to split aa
 into two non-empty strings a
 and a
, and f(a)+f(a)=1+1=2
.

For the second test case, by splitting abcabcd
 into abc
 and abcd
 we can get the answer of f(abc)+f(abcd)=3+4=7
 which is maximum possible.

For the third test case, it doesn't matter how we split the string, the answer will always be 2
.



*/