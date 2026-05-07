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
    ll n, k;
    cin >> n >> k;
    vi a(n);
    fl(i, n) cin >> a[i];
    sort(all(a));
    ll l = a[n / 2];
    ll h = l + k;
    ll ans = l;
    while(l<=h){
        ll m = (l + h) / 2;
        ll op=0;
        for (int i = n / 2; i < n;i++){
            if(a[i]<m){
                op += (m - a[i]);
            }
        }
        if(op<=k){
            ans = m;
            l = m + 1;
        } else{
            h = m - 1;
        }
    }
    cout << ans nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
/*
You are given an array a
 of n
 integers, where n
 is odd. You can make the following operation with it:

Choose one of the elements of the array (for example ai
) and increase it by 1
 (that is, replace it with ai+1
).
You want to make the median of the array the largest possible using at most k
 operations.

The median of the odd-sized array is the middle element after the array is sorted in non-decreasing order. For example, the median of the array [1,5,2,3,5]
 is 3
.

Input
The first line contains two integers n
 and k
 (1≤n≤2⋅105
, n
 is odd, 1≤k≤109
) — the number of elements in the array and the largest number of operations you can make.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
).

Output
Print a single integer — the maximum possible median after the operations.

Examples
InputCopy
3 2
1 3 5
OutputCopy
5
InputCopy
5 5
1 2 1 1 1
OutputCopy
3
InputCopy
7 7
4 1 2 4 3 4 4
OutputCopy
5
Note
In the first example, you can increase the second element twice. Than array will be [1,5,5]
 and it's median is 5
.

In the second example, it is optimal to increase the second number and than increase third and fifth. This way the answer is 3
.

In the third example, you can make four operations: increase first, fourth, sixth, seventh element. This way the array will be [5,1,2,5,3,5,5]
 and the median will be 5
.



*/