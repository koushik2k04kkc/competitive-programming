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
    int n, q;
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector<array<int, 26>> p(n + 1);
    for (int i = 0; i < n; i++)
    {
        p[i + 1] = p[i];
        p[i + 1][a[i] - 'a']++;
        p[i + 1][b[i] - 'a']--;
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        int ans = 0;
        for (int c = 0; c < 26; c++)
        {
            ans += max(0, p[r][c] - p[l][c]);
        }
        cout << ans << nl;
    }
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
You are given two strings a
 and b
 of length n
. Then, you are (forced against your will) to answer q
 queries.

For each query, you are given a range bounded by l
 and r
. In one operation, you can choose an integer i
 (l≤i≤r
) and set ai=x
 where x
 is any character you desire. Output the minimum number of operations you must perform such that sorted(a[l..r])=sorted(b[l..r])
. The operations you perform on one query does not affect other queries.

For an arbitrary string c
, sorted(c[l..r])
 denotes the substring consisting of characters cl,cl+1,...,cr
 sorted in lexicographical order.

Input
The first line contains t
 (1≤t≤1000
) – the number of test cases.

The first line of each test case contains two integers n
 and q
 (1≤n,q≤2⋅105
) – the length of both strings and the number of queries.

The following line contains a
 of length n
. It is guaranteed a
 only contains lowercase latin letters.

The following line contains b
 of length n
. It is guaranteed b
 only contains lowercase latin letters.

The following q
 lines contain two integers l
 and r
 (1≤l≤r≤n
) – the range of the query.

It is guaranteed the sum of n
 and q
 over all test cases does not exceed 2⋅105
.

Output
For each query, output an integer, the minimum number of operations you need to perform in a new line.

Example
InputCopy
3
5 3
abcde
edcba
1 5
1 4
3 3
4 2
zzde
azbe
1 3
1 4
6 3
uwuwuw
wuwuwu
2 4
1 3
1 6
OutputCopy
0
1
0
2
2
1
1
0
Note
For the first query, sorted(a[1..5])=
 abcde and sorted(b[1..5])=
 abcde, so no operations are necessary.

For the second query, you need to set a1=
 e. Then, sorted(a[1..4])=sorted(b[1..4])=
 bcde.
*/