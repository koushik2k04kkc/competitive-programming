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
    int n;
    cin >> n;
    vector<string> a(n);
    map<string, bool> m;
    fl(i,n){
        cin >> a[i];
        m[a[i]] = true;
    }
    for (int j = 0; j < n;j++){
        bool f = 0;
        for (int i = 1; i<a[j].size();i++){
            string s1 = a[j].substr(0, i);
            string s2 = a[j].substr(i);
            if(m[s1] && m[s2]){
                f = 1;
                break;
            }
        }
        if(f){
            cout << 1;
        } else{
            cout << 0;
        }
    }
    cout nl;
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
You are given n
 strings s1,s2,…,sn
 of length at most 8
.

For each string si
, determine if there exist two strings sj
 and sk
 such that si=sj+sk
. That is, si
 is the concatenation of sj
 and sk
. Note that j
 can be equal to k
.

Recall that the concatenation of strings s
 and t
 is s+t=s1s2…spt1t2…tq
, where p
 and q
 are the lengths of strings s
 and t
 respectively. For example, concatenation of "code" and "forces" is "codeforces".

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤105
) — the number of strings.

Then n
 lines follow, the i
-th of which contains non-empty string si
 of length at most 8
, consisting of lowercase English letters. Among the given n
 strings, there may be equal (duplicates).

The sum of n
 over all test cases doesn't exceed 105
.

Output
For each test case, output a binary string of length n
. The i
-th bit should be 1
 if there exist two strings sj
 and sk
 where si=sj+sk
, and 0
 otherwise. Note that j
 can be equal to k
.

Example
InputCopy
3
5
abab
ab
abc
abacb
c
3
x
xx
xxx
8
codeforc
es
codes
cod
forc
forces
e
code
OutputCopy
10100
011
10100101
Note
In the first test case, we have the following:

s1=s2+s2
, since abab=ab+ab
. Remember that j
 can be equal to k
.
s2
 is not the concatenation of any two strings in the list.
s3=s2+s5
, since abc=ab+c
.
s4
 is not the concatenation of any two strings in the list.
s5
 is not the concatenation of any two strings in the list.
Since only s1
 and s3
 satisfy the conditions, only the first and third bits in the answer should be 1
, so the answer is 10100
.


*/