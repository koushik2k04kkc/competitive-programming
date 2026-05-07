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
    int n;
    cin >> n;
    map<int, int> fq;
    fl(i,2*n){
        int x;
        cin >> x;
        fq[x]++;
    }
//     int odd = 0, even = 0,ans;
//     for(auto& p: fq){
//         if(p.second%2==0){
//             even++;
//         } else{
//             odd++;
//         }
//     }
//    if(odd>0){
//        ans = odd + 2 * even;
//    } else{
//     if(n%2==0){
//         ans = 0;
//     }else{
//         if(even==1){
//             ans = 2;
//         } else{
//             ans = 2 * even - 2;
//         }
//     }
//    }
    int ans = 0;
    for (auto& p : fq) ans += (p.second % 2 == 0) + 1;
    if (ans == (int)fq.size() * 2 && ((int)fq.size() + n) % 2) ans -= 2;
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
You are given a sequence a
 containing 2n
 integers. Let f(b)
 denote the number of distinct elements with an odd number of occurrences in sequence b
. You need to split the given array into two disjoint subsequences p
 and q
, each of size n
, such that f(p)+f(q)
 is maximized. Output the maximum value.

A sequence a
 is a subsequence of a sequence b
 if a
 can be obtained from b
 by the deletion of several (possibly, zero or all) element from arbitrary positions.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains an integer n
 (1≤n≤2⋅105
).

The second line contains 2n
 integers a1,a2,…,a2n
 (1≤ai≤2n
) — the elements of sequence a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, print one line.

You have to print the maximum value of f(p)+f(q)
 that can be achieved.

Example
InputCopy
7
2
1 2 3 4
3
5 5 5 5 5 5
4
3 3 7 6 3 7 8 7
2
2 2 2 2
6
1 2 3 4 5 4 1 4 1 5 4 6
4
1 2 1 2 1 2 1 2
5
9 9 9 7 7 7 9 7 7 7
OutputCopy
4
2
4
0
8
4
2
Note
For the first test case:

We can divide the array such that p=[1,3]
 and q=[2,4]
.
This way, f(p)=2
 and f(q)=2
 since both have two distinct elements with odd frequency.
For the second test case:

We can divide the array such that p=[5,5,5]
 and q=[5,5,5]
.
This way, f(p)=1
 and f(q)=1
.
For the fifth test case:

We can divide the array such that p=[1,2,3,4,5,6]
 and q=[4,1,4,1,5,4]
.
This way, f(p)=6
 and f(q)=2
.

*/