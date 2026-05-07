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
    ll diff = 0;
    map<ll,ll> mp;
    mp[0] = 0;
    bool f = 0;
    fl(i,n){
    if(i%2==1){
        diff += a[i];
    } else{
        diff -= a[i];
    }
    if(mp.count(diff)){
        f = 1;
        break;
    }
    mp[diff] = i;
}
if(f){
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
Iulia has n
 glasses arranged in a line. The i
-th glass has ai
 units of juice in it. Iulia drinks only from odd-numbered glasses, while her date drinks only from even-numbered glasses.

To impress her date, Iulia wants to find a contiguous subarray of these glasses such that both Iulia and her date will have the same amount of juice in total if only the glasses in this subarray are considered. Please help her to do that.

More formally, find out if there exists two indices l
, r
 such that 1≤l≤r≤n
, and al+al+2+al+4+⋯+ar=al+1+al+3+⋯+ar−1
 if l
 and r
 have the same parity and al+al+2+al+4+⋯+ar−1=al+1+al+3+⋯+ar
 otherwise.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the total number of glasses.

The second line of each test case contains n
 integers a1,…,an
 (1≤ai≤109
) — the amount of juice in each glass.

The sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output "YES" if there exists a subarray satisfying the condition, and "NO" otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
InputCopy
6
3
1 3 2
6
1 1 1 1 1 1
10
1 6 9 8 55 3 14 2 7 2
8
1 2 11 4 1 5 1 2
6
2 6 1 5 7 8
9
2 5 10 4 4 9 6 7 8
OutputCopy
YES
YES
NO
YES
NO
YES
Note
In the first test case, Iulia can pick l=1
 and r=3
. Then she drinks a1+a3=1+2=3
 units and her date drinks a2=3
 units of juice.

In the second test case, Iulia can pick l=2
 and r=5
. Then she drinks a3+a5=1+1=2
 units and her date drinks a2+a4=1+1=2
 units of juice.

In the third test case no such contiguous subarray works.

In the fourth test case, Iulia can pick l=2
 and r=8
. Then she drinks a3+a5+a7=11+1+1=13
 units and her date drinks a2+a4+a6+a8=2+4+5+2=13
 units of juice.



*/