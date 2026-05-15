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
    vi a(n);
    fl(i,n) cin >> a[i];
    vi cnt(26,0);
    string ans;
    fl(i,n){
        fl(x,26){
        if(cnt[x]==a[i]){
            ans.pb('a'+x);
            cnt[x]++;
            break;
        }
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
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
Polycarp lost the string s of length n consisting of lowercase Latin letters, but he still has its trace.

The trace of the string s is an array a of n integers, where ai is the number of such indices j (j<i) that si=sj. For example, the trace of the string abracadabra is the array [0,0,0,1,0,2,0,3,1,1,4].

Given a trace of a string, find any string s from which it could have been obtained. The string s should consist only of lowercase Latin letters a-z.
Input

The first line of the input contains a single integer t (1≤t≤104) — the number of test cases. Then the descriptions of the test cases follow.

The first line of each test case contains a single integer n (1≤n≤2⋅105) — the length of the lost string.

The second line of each test case contains n integers a1,a2,…,an (0≤ai<n) — the trace of the string. It is guaranteed that for the given trace, there exists a suitable string s.

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.
Output

For each test case, output a string s that corresponds to the given trace. If there are multiple such strings s, then output any of them.

The string s should consist of lowercase Latin letters a-z.

It is guaranteed that for each test case, a valid answer exists.
Example
Input
Copy

5
11
0 0 0 1 0 2 0 3 1 1 4
10
0 0 0 0 0 1 0 1 1 0
1
0
8
0 1 2 3 4 5 6 7
8
0 0 0 0 0 0 0 0

Output
Copy

abracadabra
codeforces
a
aaaaaaaa
dijkstra


*/