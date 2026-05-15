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
    vi a(n+1,0);
    vi ans(n+1,0);
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(a[i]==a[i-1]){
            ans[i]=ans[i-1];
        } else{
            ans[i]=i-1;
        }
    }
     int q;
     cin >> q;
     while(q--){
        int l,r;
        cin >> l >> r ;
        if(ans[r]>=l){
          cout << ans[r] << " " << r << nl;
        } else {
            cout << "-1 -1" << nl;
        }
     }
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
You are given an array a of n integers, and q queries.

Each query is represented by two integers l and r (1≤l≤r≤n). Your task is to find, for each query, two indices i and j (or determine that they do not exist) such that:

    l≤i≤r;
    l≤j≤r;
    ai≠aj. 

In other words, for each query, you need to find a pair of different elements among al,al+1,…,ar, or report that such a pair does not exist.
Input

The first line of the input contains a single integer t (1≤t≤104) — the number of test cases. The descriptions of the test cases follow.

The first line of each test case contains a single integer n (2≤n≤2⋅105) — the length of the array a.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤106) — the elements of the array a.

The third line of each test case contains a single integer q (1≤q≤2⋅105) — the number of queries.

The next q lines contain two integers each, l and r (1≤l<r≤n) — the boundaries of the query.

It is guaranteed that the sum of the values of n across all test cases does not exceed 2⋅105. Similarly, it is guaranteed that the sum of the values of q across all test cases does not exceed 2⋅105.
Output

For each query, output two integers separated by space: i and j (l≤i,j≤r), for which ai≠aj. If such a pair does not exist, output i=−1 and j=−1.

You may separate the outputs for the test cases with empty lines. This is not a mandatory requirement.
Example
Input
Copy

5
5
1 1 2 1 1
3
1 5
1 2
1 3
6
30 20 20 10 10 20
5
1 2
2 3
2 4
2 6
3 5
4
5 2 3 4
4
1 2
1 4
2 3
2 4
5
1 4 3 2 4
5
1 5
2 4
3 4
3 5
4 5
5
2 3 1 4 2
7
1 2
1 4
1 5
2 4
2 5
3 5
4 5

Output
Copy

2 3
-1 -1
1 3

2 1
-1 -1
4 2
4 6
5 3

1 2
1 2
2 3
3 2

1 3
2 4
3 4
5 3
5 4

1 2
4 2
1 3
2 3
3 2
5 4
5 4

*/