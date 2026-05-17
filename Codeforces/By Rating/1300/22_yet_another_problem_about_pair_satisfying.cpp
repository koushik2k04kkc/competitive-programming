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
    int a[n];
    fl(i, n)   cin >> a[i];
    ll ans =0;
    vi v;
    fl(i,n){
        if(a[i]>=i+1){
            continue;
        }
        ans+=(ll)(lower_bound(all(v),a[i])-v.begin());
        v.pb(i+1);
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
You are given an array a1,a2,…an. Count the number of pairs of indices 1≤i,j≤n such that ai<i<aj<j.
Input

The first line contains an integer t (1≤t≤1000) — the number of test cases.

The first line of each test case contains an integer n (2≤n≤2⋅105) — the length of the array.

The second line of each test case contains n integers a1,a2,…,an (0≤ai≤109) — the elements of the array.

It is guaranteed that the sum of n across all test cases does not exceed 2⋅105.
Output

For each test case, output a single integer — the number of pairs of indices satisfying the condition in the statement.

Please note, that the answer for some test cases won't fit into 32-bit integer type, so you should use at least 64-bit integer type in your programming language (like long long for C++).
Example
Input
Copy

5
8
1 1 2 3 8 2 1 4
2
1 2
10
0 2 1 6 3 4 1 2 8 3
2
1 1000000000
3
0 1000000000 2

Output
Copy

3
0
10
0
1

Note

For the first test cases the pairs are (i,j) = {(2,4),(2,8),(3,8)}.

    The pair (2,4) is true because a2=1, a4=3 and 1<2<3<4.
    The pair (2,8) is true because a2=1, a8=4 and 1<2<4<8.
    The pair (3,8) is true because a3=2, a8=4 and 2<3<4<8. 


*/