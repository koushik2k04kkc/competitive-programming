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
    int a, b;
    cin >> a >> b;
    if(a>b){
        swap(a, b);
    }
    if(a!=1 and b!=2){
        py;
    } else{
        pn;
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
A path in a grid is called greedy if it starts at the top-left cell and moves only to the right or downward, always moving to its neighbor with the greater value (or either if the values are equal).

The value of a path is the sum of the values of the cells it visits, including the start and end.

Does there exist an n×m
 grid of nonnegative integers such that no greedy path achieves the maximum value among all down/right paths?

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤5000
). The description of the test cases follows.

The only line of each test case contains two integers n
, m
 (1≤n,m≤100
) — the number of rows and columns in the grid, respectively.

Output
For each test case, on a separate line output "YES" if the required grid exists, and "NO" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

Example
InputCopy
2
3 3
1 2
OutputCopy
YES
NO
Note
In the first test case, an example of a grid in which no greedy path achieves the maximum value out of all down/right paths is:
⎡⎣⎢325514123⎤⎦⎥
Let ai,j
 denote the value of the cell in the i
-th row and j
-th column. The maximum value of a down/right path is a1,1+a2,1+a3,1+a3,2+a3,3=17
. This path isn't greedy because a1,2
 is greater than a2,1
; thus, a greedy path must move right in the first step. The maximum value of a greedy path is a1,1+a1,2+a2,2+a3,2+a3,3=16
.

In the second test case, it can be proven that no grid satisfies the conditions.



*/