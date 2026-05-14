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
    vi a(n);
    fl(i, n) cin >> a[i];
    if (a[0] + a[1] <= a[n - 1])
    {
        cout << 1 << " " << 2 << " " << n nl;
    }
    else
    {
        cout << -1 nl;
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
You are given an array a1,a2,…,an
, which is sorted in non-decreasing order (ai≤ai+1)
.

Find three indices i
, j
, k
 such that 1≤i<j<k≤n
 and it is impossible to construct a non-degenerate triangle (a triangle with nonzero area) having sides equal to ai
, aj
 and ak
 (for example it is possible to construct a non-degenerate triangle with sides 3
, 4
 and 5
 but impossible with sides 3
, 4
 and 7
). If it is impossible to find such triple, report it.

Input
The first line contains one integer t
 (1≤t≤1000
) — the number of test cases.

The first line of each test case contains one integer n
 (3≤n≤5⋅104
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
; ai−1≤ai
) — the array a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case print the answer to it in one line.

If there is a triple of indices i
, j
, k
 (i<j<k
) such that it is impossible to construct a non-degenerate triangle having sides equal to ai
, aj
 and ak
, print that three indices in ascending order. If there are multiple answers, print any of them.

Otherwise, print -1.

Example
InputCopy
3
7
4 6 11 11 15 18 20
4
10 10 10 11
3
1 1 1000000000
OutputCopy
2 3 6
-1
1 2 3
Note
In the first test case it is impossible with sides 6
, 11
 and 18
. Note, that this is not the only correct answer.

In the second test case you always can construct a non-degenerate triangle.



*/