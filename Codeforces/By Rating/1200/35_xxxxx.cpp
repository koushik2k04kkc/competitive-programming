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

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    ll n, x;
    cin >> n >> x;
    vi a(n);
    fl(i, n) cin >> a[i];
    int sum = 0;
    fl(i, n) sum += a[i];
    if (sum % x != 0)
    {
        cout << n << nl;
        return;
    }
    ll l = -1, r = -1;
    fl(i,n){
        if(a[i]%x!=0){
            if(l==-1) l = i;
            r = i;
        }
    }
    if(l==-1){
        cout << -1 << nl;
        return;
    }
    int ans = max(n - (l + 1), r);
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
Ehab loves number theory, but for some reason he hates the number x
. Given an array a
, find the length of its longest subarray such that the sum of its elements isn't divisible by x
, or determine that such subarray doesn't exist.

An array a
 is a subarray of an array b
 if a
 can be obtained from b
 by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.

Input
The first line contains an integer t
 (1≤t≤5)
 — the number of test cases you need to solve. The description of the test cases follows.

The first line of each test case contains 2 integers n
 and x
 (1≤n≤105
, 1≤x≤104
) — the number of elements in the array a
 and the number that Ehab hates.

The second line contains n
 space-separated integers a1
, a2
, …
, an
 (0≤ai≤104
) — the elements of the array a
.

Output
For each testcase, print the length of the longest subarray whose sum isn't divisible by x
. If there's no such subarray, print −1
.

Example
InputCopy
3
3 3
1 2 3
3 4
1 2 3
2 2
0 6
OutputCopy
2
3
-1
Note
In the first test case, the subarray [2,3]
 has sum of elements 5
, which isn't divisible by 3
.

In the second test case, the sum of elements of the whole array is 6
, which isn't divisible by 4
.

In the third test case, all subarrays have an even sum, so the answer is −1
.



*/