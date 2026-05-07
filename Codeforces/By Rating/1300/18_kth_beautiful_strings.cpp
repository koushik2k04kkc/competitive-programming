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

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s(n, 'a');
    for(int i=n-2;i>=0;i--){
        ll cnt = n - i - 1;
        if(k>cnt){
            k -= cnt;
        } else{
            s[i] = 'b';
            s[n-k] = 'b';
            break;
        }
    }
    cout << s << nl;
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
For the given integer n
 (n>2
) let's write down all the strings of length n
 which contain n−2
 letters 'a' and two letters 'b' in lexicographical (alphabetical) order.

Recall that the string s
 of length n
 is lexicographically less than string t
 of length n
, if there exists such i
 (1≤i≤n
), that si<ti
, and for any j
 (1≤j<i
) sj=tj
. The lexicographic comparison of strings is implemented by the operator < in modern programming languages.

For example, if n=5
 the strings are (the order does matter):

aaabb
aabab
aabba
abaab
ababa
abbaa
baaab
baaba
babaa
bbaaa
It is easy to show that such a list of strings will contain exactly n⋅(n−1)2
 strings.

You are given n
 (n>2
) and k
 (1≤k≤n⋅(n−1)2
). Print the k
-th string from the list.

Input
The input contains one or more test cases.

The first line contains one integer t
 (1≤t≤104
) — the number of test cases in the test. Then t
 test cases follow.

Each test case is written on the the separate line containing two integers n
 and k
 (3≤n≤105,1≤k≤min(2⋅109,n⋅(n−1)2)
.

The sum of values n
 over all test cases in the test doesn't exceed 105
.

Output
For each test case print the k
-th string from the list of all described above strings of length n
. Strings in the list are sorted lexicographically (alphabetically).

Example
InputCopy
7
5 1
5 2
5 8
5 10
3 1
3 2
20 100
OutputCopy
aaabb
aabab
baaba
bbaaa
abb
bab
aaaaabaaaaabaaaaaaaa


*/