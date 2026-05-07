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
    vi a(n);
    fl(i, n) cin >> a[i];
    ll mx = 0, cnt = 0;
    fl(i,n){
        if(a[i]>=mx){
            cnt++;
            mx = a[i];
        }
    }
    cout << cnt << nl;
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
You are given an array a
 consisting of n
 integers.

While the array is not empty, an operation is performed consisting of two steps:

first, the maximum element in the array is chosen (if there are multiple maximum elements, the rightmost maximum is chosen);
then, all elements after the chosen element, including it, are removed from the array.
Your task is to calculate the number operations that will be performed before the array becomes empty.

Input
The first line contains one integer t
 (1≤t≤104
) — the number of test cases.

Each test case consists of two lines:

the first line contains one integer n
 (2≤n≤2⋅105
);
the second line contains n
 integers a1,a2,…,an
 (1≤ai≤n
).
Additional constraint on the input: the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, print one integer — the number of operations that will be performed.

Example
InputCopy
4
5
2 1 2 3 1
6
1 2 3 4 5 6
3
3 2 1
4
1 3 3 1
OutputCopy
3
6
1
3
Note
In the first example, the array is [2,1,2,3,1]
. The following operations are performed on it:

first, the 4
-th element is chosen. The last two elements are removed, and the array becomes [2,1,2]
;
then, the 3
-rd element is chosen. The last element is removed, and the array becomes [2,1]
;
then, the 1
-st element is chosen. Both elements are removed, so the array becomes empty after 3
 operations.
*/