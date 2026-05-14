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
   sort(all(a));
   a.erase(unique(a.begin(), a.end()), a.end());
   int best = 1, cur = 1;
   for (int i = 1; i < (int)a.size(); i++)
   {
       if (a[i] == a[i - 1] + 1)
       {
           cur++;
       }
       else
       {
           cur = 1;
       }
       best = max(best, cur);
   }
    cout << best <<nl;
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
You are given an array of n
 integers a1,a2,…,an
. You are allowed to perform the following operation once.

Select an integer x
 (which may be negative), and for each value i
 (1≤i≤n)
, set ai=ai+x
.
For example, if a=[1,3,4,2]
, and you perform the operation with x=3
, a
 is now equal to [4,6,7,5]
.

Output the maximum possible value of MEX(a)
∗
 after the operation is performed.

∗
MEX(a)
 is defined as the smallest non-negative integer that is not present in the array. For example, MEX([1,2,0,5])
 is 3
, and MEX([1,2,4,9])
 is 0
.

Input
The first line of the input contains a single integer t
 (1≤t≤1000
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤3000
) — the length of array a
.

The second line contains n
 integers a1,a2,…,an
 (−109≤ai≤109
) — the array a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 3000
.

Output
For each test case, output the maximum possible value of MEX(a)
 after the operation has been performed.

Example
InputCopy
6
1
4
5
0 1 1 2 3
2
1 1
4
4 2 3 6
5
2 4 1 0 -1
6
-1 1 2 3 5 6
OutputCopy
1
4
1
3
4
3
Note
For the first test case, performing the operation with x=−4
 makes a=[0]
, and MEX([0])=1
.

For the second test case, the MEX
 is already 4
, which is the highest possible, so we can perform the operation with x=0
, which will not change the array.


55

*/