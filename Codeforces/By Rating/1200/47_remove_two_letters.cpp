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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = n-1;
    for (int i = 1; i <= n-1;i++){
        if(s[i-1]==s[i+1]){
            ans--;
        }
    }
    cout << ans << nl;
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
Dmitry has a string s
, consisting of lowercase Latin letters.

Dmitry decided to remove two consecutive characters from the string s
 and you are wondering how many different strings can be obtained after such an operation.

For example, Dmitry has a string "aaabcc". You can get the following different strings: "abcc"(by deleting the first two or second and third characters), "aacc"(by deleting the third and fourth characters),"aaac"(by deleting the fourth and the fifth character) and "aaab" (by deleting the last two).

Input
The first line of input data contains a single integer t
 (1≤t≤104
) — number of test cases.

The descriptions of the test cases follow.

The first line of the description of each test case contains an integer n
 (3≤n≤2⋅105
).

The second line of the description of each test case contains a string s
 of length n
 consisting of lowercase Latin letters.

It is guaranteed that the sum of n
 for all test cases does not exceed 2⋅105
.

Output
For each test case print one integer — the number of distinct strings that can be obtained by removing two consecutive letters.

Example
InputCopy
7
6
aaabcc
10
aaaaaaaaaa
6
abcdef
7
abacaba
6
cccfff
4
abba
5
ababa
OutputCopy
4
1
5
3
3
3
1
Note
The first example is explained in the statement.

In the third example, the following strings are obtained: "cdef", "adef", "abef", "abcf", "abcd".

In the seventh example, any deletion will result in the string "aba".



*/