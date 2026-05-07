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
    vi a(n);
    fl(i, n) cin >> a[i];
    int l = 0, r = n - 1;
    int mn = 1, mx = n;
    while(l<=r){
        if(a[l]==mn){
            l++;
            mn++;
        }
        else if (a[l]==mx){
            l++;
            mx--;
        } else if(a[r]==mn){
            r--;
            mn++;
        } else if(a[r]==mx){
            r--;
            mx--;
        } else{
            break;
        }
    }
    if(l<=r){
        cout << l + 1 << " " << r + 1 << nl;
    } else{
        cout << -1 << nl;
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
As you know, the girl Dora is always looking for something. This time she was given a permutation, and she wants to find such a subsegment of it that none of the elements at its ends is either the minimum or the maximum of the entire subsegment. More formally, you are asked to find the numbers l
 and r
 (1≤l≤r≤n)
 such that al≠min(al,al+1,…,ar)
, al≠max(al,al+1,…,ar)
 and ar≠min(al,al+1,…,ar)
, ar≠max(al,al+1,…,ar)
.

A permutation of length n
 is an array consisting of n
 distinct integers from 1
 to n
 in any order. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (2
 occurs twice in the array) and [1,3,4]
 is also not a permutation (n=3
, but 4
 is present in the array).

Help Dora find such a subsegment, or tell her that such a subsegment does not exist.

Input
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. Description of the test cases follows.

For each test case, the first line contains one integer n
 (1≤n≤2⋅105
) — the length of permutation.

The second line contains n
 distinct integers a1,a2,…,an
 (1≤ai≤n
) — the elements of permutation.

It is guarented that the sum of n
 over all test cases doesn't exceed 2⋅105
.

Output
For each test case, output −1
 if the desired subsegment does not exist.

Otherwise, output two indexes l,r
 such that [al,al+1,…,ar]
 satisfies all conditions.

If there are several solutions, then output any of them.

Example
InputCopy
4
3
1 2 3
4
2 1 4 3
7
1 3 2 4 6 5 7
6
2 3 6 5 4 1
OutputCopy
-1
1 4
2 6
-1
Note
In the first and fourth test cases, it can be shown that there are no desired subsegments.

In the second test case, the subsegment [1,4]
 satisfies all the conditions, because max(a1,a2,a3,a4)=4,min(a1,a2,a3,a4)=1
, as we see, all the conditions are met.

In the third test case, the subsegment [2,6]
 also satisfies all the conditions described.



*/