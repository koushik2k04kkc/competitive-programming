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
    ll n ,k;
    cin >> n>>k;
    vi a(n),f(31,0);
    fl(i,n){
        cin >> a[i];
        for(int j=0;j<31;j++){
            if((a[i]>>j)&1) f[j]++;
        }
    }
    ll ans=0;
    for(int i=30;i>=0;i--){
        ll need = n-f[i];
        if(need<=k){
            k-=need;
            ans|=(1<<i);
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
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
Let AND denote the bitwise AND operation, and OR denote the bitwise OR operation.

You are given an array a of length n and a non-negative integer k. You can perform at most k operations on the array of the following type:

    Select an index i (1≤i≤n) and replace ai with ai OR 2j where j is any integer between 0 and 30 inclusive. In other words, in an operation you can choose an index i (1≤i≤n) and set the j-th bit of ai to 1 (0≤j≤30). 

Output the maximum possible value of a1 AND a2 AND … AND an after performing at most k operations.
Input

The first line of the input contains a single integer t (1≤t≤100) — the number of test cases. The description of test cases follows.

The first line of each test case contains the integers n and k (1≤n≤2⋅105, 0≤k≤109).

Then a single line follows, containing n integers describing the arrays a (0≤ai<231).

It is guaranteed that the sum of n over all test cases does not exceed 2⋅105.
Output

For each test case, output a single line containing the maximum possible AND value of a1 AND a2 AND … AND an after performing at most k operations.
Example
Input
Copy

4
3 2
2 1 1
7 0
4 6 6 28 6 6 12
1 30
0
4 4
3 1 3 1

Output
Copy

2
4
2147483646
1073741825

Note

For the first test case, we can set the bit 1 (21) of the last 2 elements using the 2 operations, thus obtaining the array [2, 3, 3], which has AND value equal to 2.

For the second test case, we can't perform any operations so the answer is just the AND of the whole array which is 4.


*/