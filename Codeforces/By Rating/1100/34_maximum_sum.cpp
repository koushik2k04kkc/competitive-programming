#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define be(v) v.begin(), v.end()
#define eb(v) v.rbegin(), v.rend()

typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n);
    fl(i, n) cin >> a[i];
    sort(be(a));
    vi p(n + 1, 0);
    fl(i, n) p[i + 1] = p[i] + a[i];
    ll ans = 0;
    for (int m = 0; m <= k; m++)
    {
        if (2 * m > n || (k - m) > n)
            continue;
        int l = 2 * m;
        int r = n - (k - m);
        if (l > r)
            continue;
        ll curr = p[r] - p[l];
        ans = max(ans, curr);
    }
    cout << ans nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/*
You are given an array a1,a2,…,an
, where all elements are different.

You have to perform exactly k
 operations with it. During each operation, you do exactly one of the following two actions (you choose which to do yourself):

find two minimum elements in the array, and delete them;
find the maximum element in the array, and delete it.
You have to calculate the maximum possible sum of elements in the resulting array.

Input
The first line contains one integer t
 (1≤t≤104
) — the number of test cases.

Each test case consists of two lines:

the first line contains two integers n
 and k
 (3≤n≤2⋅105
; 1≤k≤99999
; 2k<n
) — the number of elements and operations, respectively.
the second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
; all ai
 are different) — the elements of the array.
Additional constraint on the input: the sum of n
 does not exceed 2⋅105
.

Output
For each test case, print one integer — the maximum possible sum of elements in the resulting array.

Example
InputCopy
6
5 1
2 5 1 10 6
5 2
2 5 1 10 6
3 1
1 2 3
6 1
15 22 12 10 13 11
6 2
15 22 12 10 13 11
5 1
999999996 999999999 999999997 999999998 999999995
OutputCopy
21
11
3
62
46
3999999986
Note
In the first testcase, applying the first operation produces the following outcome:

two minimums are 1
 and 2
; removing them leaves the array as [5,10,6]
, with sum 21
;
a maximum is 10
; removing it leaves the array as [2,5,1,6]
, with sum 14
.
21
 is the best answer.

In the second testcase, it's optimal to first erase two minimums, then a maximum.



*/