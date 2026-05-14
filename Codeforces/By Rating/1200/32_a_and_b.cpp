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

ll op(const vi &v)
{
    int k = v.size();
    if (k == 0) return 0;
    vi pre(k);
    for (int i = 0; i < k; i++)
    {
        pre[i] = v[i] - i;
    }
    sort(all(pre));
    ll m = pre[k / 2];
    ll ans = 0;
    for (auto val : pre) ans += llabs(val - m);
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vi a, b;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'a') a.pb(i);
        else b.pb(i);
    }
    if (a.empty() || b.empty())
    {
        cout << 0 nl;
        return;
    }
    ll op_a = op(a);
    ll op_b = op(b);
    cout << min(op_a, op_b) nl;
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
Given a string s
 of length n
, consisting only of the characters 'a' and 'b'.

In one operation, you can choose a position i
 (1≤i≤n−1
) and swap the neighboring characters si
 and si+1
.

You need to perform the minimum number of operations to ensure that all characters of one type (either a
 or b
) are located strictly together, forming exactly one continuous block.

Characters of the other type can be positioned either before or after this block, forming two (possibly empty) blocks.

Examples of valid final forms:

'aaabbbaaa' — all 'b's are located together (one block), 'a's can be both before and after this block;
'bbbaaaaaabbb' — all 'a's together, 'b's are at the edges of the string;
'aaaaabbbb' or 'bbbbaaaaa' — both types of characters form one continuous block each.
You need to find the minimum number of described operations required to achieve the specified state.

Input
Each test consists of several test cases.

The first line contains one integer t
 (1≤t≤104
) — the number of test cases. The description of test cases follows.

The first line of each test case contains one integer n
 (1≤n≤2⋅105
) — the length of the string s
.

The second line contains the string s
 of length n
, consisting only of the characters 'a' and 'b'.

It is guaranteed that the sum of the values of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output one integer — the minimum number of operations required for all characters of one of the two types to form a single continuous block.

Example
InputCopy
5
4
abab
6
bababa
7
abababa
2
ab
1
b
OutputCopy
1
2
2
0
0
Note
In the first test case, the initial string is 'abab':

by swapping the neighboring characters at positions 2
 and 3
, we get the string 'aabb';
or by swapping the characters at positions 1
 and 2
, we get the string 'baab'.
In both cases, exactly one operation is performed, after which all letters of one type form a single block, so the minimum number of operations is 1
.
In the fifth input test case, the string consists of a single character 'b'. The single character already forms a continuous block, no swaps are needed, so the minimum number of operations is 0
.



*/