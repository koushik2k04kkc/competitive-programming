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

void solve()
{
    int n;
    cin >> n;
    vector<vi> g(n + 1);
    vector<int> deg(n + 1, 0);
    fl(i,n-1)
    {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
        deg[u]++;
        deg[v]++;
    }
    if (n == 2)
    {
        cout << 0 nl;
        return;
    }
    int L = 0;
    for (int v = 1; v <= n; ++v)
        if (deg[v] == 1){
            L++;
        }
    int ans = 0;
    for (int v = 1; v <= n; ++v)
    {
        int cnt = 0;
        for (int tra : g[v])
            if (deg[tra] == 1){
                cnt++;
            }
        ans = max(ans, cnt);
    }
    cout << (L - ans) nl;
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
Kagari is preparing to archive a tree, and she knows the cost of doing so will depend on its diameter∗
. To keep the expense down, her goal is to shrink the diameter as much as possible first. She can perform the following operation on the tree:

Choose two vertices s
 and t
. Let the sequence of vertices on the simple path†
 from s
 to t
 be v0,v1,…,vk
, where v0=s
 and vk=t
.
Remove all edges along the path. In other words, remove edges (v0,v1),(v1,v2),…,(vk−1,vk)
.
Connect vertices v1,v2,…,vk
 directly to v0
. In other words, add edges (v0,v1),(v0,v2),…,(v0,vk)
.
It can be shown that the graph is still a tree after the operation.

Help her determine the minimum number of operations required to achieve the minimal diameter.

∗
The diameter of a tree is the longest possible distance between any pair of vertices. The distance itself is measured by the number of edges on the unique simple path connecting them.

†
A simple path is a path between two vertices in a tree that does not visit any vertex more than once. It can be shown that the simple path between any two vertices is always unique.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains one integer n
 (2≤n≤2⋅105
) — the number of the vertices in the tree.

The following n−1
 lines of each test case describe the tree. Each of the lines contains two integers u
 and v
 (1≤u,v≤n
, u≠v
) that indicate an edge between vertex u
 and v
. It is guaranteed that these edges form a tree.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output one integer — the minimum number of operations to minimize the diameter.

Example
InputCopy
4
4
1 2
1 3
2 4
2
2 1
4
1 2
2 3
2 4
11
1 2
1 3
2 4
3 5
3 8
5 6
5 7
7 9
7 10
5 11
OutputCopy
1
0
0
4
Note
In the first test case, the diameter of the original tree is 3
. Kagari can perform an operation on s=3
 and t=4
. As the figure depicts, the operations includes the following steps:

Remove edges (3,1)
, (1,2)
 and (2,4)
.
Add edges (3,1)
, (3,2)
 and (3,4)
.

After the operation, the diameter reduces to 2
. It can be shown that 2
 is the minimum diameter.

In the second test case, the diameter of the tree is 1
. It can be shown that 1
 is already the minimum, so Kagari can perform no operation.


Kagari is preparing to archive a tree, and she knows the cost of doing so will depend on its diameter∗
. To keep the expense down, her goal is to shrink the diameter as much as possible first. She can perform the following operation on the tree:

Choose two vertices s
 and t
. Let the sequence of vertices on the simple path†
 from s
 to t
 be v0,v1,…,vk
, where v0=s
 and vk=t
.
Remove all edges along the path. In other words, remove edges (v0,v1),(v1,v2),…,(vk−1,vk)
.
Connect vertices v1,v2,…,vk
 directly to v0
. In other words, add edges (v0,v1),(v0,v2),…,(v0,vk)
.
It can be shown that the graph is still a tree after the operation.

Help her determine the minimum number of operations required to achieve the minimal diameter.

∗
The diameter of a tree is the longest possible distance between any pair of vertices. The distance itself is measured by the number of edges on the unique simple path connecting them.

†
A simple path is a path between two vertices in a tree that does not visit any vertex more than once. It can be shown that the simple path between any two vertices is always unique.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains one integer n
 (2≤n≤2⋅105
) — the number of the vertices in the tree.

The following n−1
 lines of each test case describe the tree. Each of the lines contains two integers u
 and v
 (1≤u,v≤n
, u≠v
) that indicate an edge between vertex u
 and v
. It is guaranteed that these edges form a tree.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output one integer — the minimum number of operations to minimize the diameter.

Example
InputCopy
4
4
1 2
1 3
2 4
2
2 1
4
1 2
2 3
2 4
11
1 2
1 3
2 4
3 5
3 8
5 6
5 7
7 9
7 10
5 11
OutputCopy
1
0
0
4
Note
In the first test case, the diameter of the original tree is 3
. Kagari can perform an operation on s=3
 and t=4
. As the figure depicts, the operations includes the following steps:

Remove edges (3,1)
, (1,2)
 and (2,4)
.
Add edges (3,1)
, (3,2)
 and (3,4)
.

After the operation, the diameter reduces to 2
. It can be shown that 2
 is the minimum diameter.

In the second test case, the diameter of the tree is 1
. It can be shown that 1
 is already the minimum, so Kagari can perform no operation.



*/