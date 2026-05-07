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
    vector<string> a(n);
    fl(i, n) cin >> a[i];
    int ans = 0;
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < (n + 1) / 2; j++)
        {
            int cnt1 = 0;
            cnt1 += (a[i][j] == '1');
            cnt1 += (a[j][n - 1 - i] == '1');
            cnt1 += (a[n - 1 - i][n - 1 - j] == '1');
            cnt1 += (a[n - 1 - j][i] == '1');
            ans += min(cnt1, 4 - cnt1);
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
You are given a square grid with n
 rows and n
 columns. Each cell contains either 0
 or 1
.

In an operation, you can select a cell of the grid and flip it (from 0→1
 or 1→0
). Find the minimum number of operations you need to obtain a square that remains the same when rotated 0∘
, 90∘
, 180∘
 and 270∘
.

The picture below shows an example of all rotations of a grid.


Input
The first line contains a single integer t
 (1≤t≤100
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the size of the grid.

Then n
 lines follow, each with n
 characters ai,j
 (0≤ai,j≤1
) — the number written in each cell.

Output
For each test case output a single integer  — the minimum number of operations needed to make the square look the same rotated 0∘
, 90∘
, 180∘
 and 270∘
.

Example
InputCopy
5
3
010
110
010
1
0
5
11100
11011
01011
10011
11000
5
01000
10101
01010
00010
01001
5
11001
00000
11111
10110
01111
OutputCopy
1
0
9
7
6
Note
In the first test case, we can perform one operations to make the grid 010111010
. Now, all rotations of the square are the same.

In the second test case, all rotations of the square are already the same, so we don't need any flips.



*/