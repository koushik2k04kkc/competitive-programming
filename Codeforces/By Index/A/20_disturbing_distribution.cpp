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
    ll ans =0;
    fl(i,n){
        if(a[i]>1) ans+=a[i];
    }
    if(a.back()==1) ans++;
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
You are given an array [a1,a2,…,an]. You wish to make the array empty by performing the following operation any number of times:

    Select any sequence of indices 1≤i1<i2<…<ik≤|a| (note that |a| denotes the current length of the array a) such that
    ai1≤ai2≤…≤aik
    Remove the elements ai1,ai2,…,aik from the array a.
    This operation incurs a cost equal to ai1×ai2×⋯×aik. 

Determine the minimum total cost required to remove all the elements from the array a. Note that the total cost is equal to the sum of costs incurred over all the operations performed.

As the answer can be very large, report the answer modulo 676767677.
Input

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤500). The description of the test cases follows.

The first line of each testcase contains a single integer n (1≤n≤100) — the length of the array a.

The second line of each testcase contains n integers a1,a2,…,an (1≤ai≤100) — the elements of the array.
Output

For each testcase, output a single integer — the minimum total cost required to make the array a empty.

As the answer may be large, output the answer modulo 676767677.
Example
Input
Copy

3
5
1 2 1 2 3
3
3 2 1
4
1 1 1 1

Output
Copy

7
6
1

Note

For the first testcase,

    Operation 1: Choose i1=1, i2=2, and i3=4. This incurs a cost of 1⋅2⋅2=4. After deleting the elements at these indices, the array becomes a=[1,3].

    Operation 2: Choose i1=1 and i2=2. This incurs a cost of 1⋅3=3. After deleting the elements at these indices, the array becomes empty.

Thus, the total cost is equal to 4+3=7. It can be shown that this is the minimum possible total cost.
*/