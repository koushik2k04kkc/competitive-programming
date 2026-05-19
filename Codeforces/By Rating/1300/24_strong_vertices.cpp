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
    vi a(n),b(n);
    fl(i,n) cin >> a[i];
    fl(i,n) cin >> b[i];
    ll mx = INT_MIN;
    fl(i,n){
        ll curr =a[i]-b[i];
        if(curr>mx) mx=curr;
    }
    vi ans;
    fl(i,n){
        if(a[i]-b[i]==mx) ans.pb(i+1);
    }
    cout << ans.size() << nl;
    for(auto i:ans) cout << i << " ";
    cout << nl;
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
Given two arrays a and b, both of length n. Elements of both arrays indexed from 1 to n. You are constructing a directed graph, where edge from u to v (u≠v) exists if au−av≥bu−bv.

A vertex V is called strong if there exists a path from V to all other vertices.

A path in a directed graph is a chain of several vertices, connected by edges, such that moving from the vertex u, along the directions of the edges, the vertex v can be reached.

Your task is to find all strong vertices.

For example, if a=[3,1,2,4] and b=[4,3,2,1], the graph will look like this:
The graph has only one strong vertex with number 4
Input

The first line contains an integer t (1≤t≤104) — the number of test cases.

The first line of each test case contains an integer n (2≤n≤2⋅105) — the length of a and b.

The second line of each test case contains n integers a1,a2…an (−109≤ai≤109) — the array a.

The third line of each test case contains n integers b1,b2…bn (−109≤bi≤109) — the array b.

It is guaranteed that the sum of n for all test cases does not exceed 2⋅105.
Output

For each test case, output two lines: in the first line, output the number of strong vertices, and in the second line, output all strong vertices in ascending order.
Example
Input
Copy

5
4
3 1 2 4
4 3 2 1
5
1 2 4 1 2
5 2 3 3 1
2
1 2
2 1
3
0 2 1
1 3 2
3
5 7 4
-2 -3 -6

Output
Copy

1
4 
2
3 5 
1
2 
3
1 2 3 
2
2 3 

Note

The first sample is covered in the problem statement.

For the second sample, the graph looks like this:
The graph has two strong vertices with numbers 3 and 5. Note that there is a bidirectional edge between vertices 3 and 5.

In the third sample, the vertices are connected by a single directed edge from vertex 2 to vertex 1, so the only strong vertex is 2.

In the fourth sample, all vertices are connected to each other by bidirectional edges, so there is a path from every vertex to any other vertex.



*/