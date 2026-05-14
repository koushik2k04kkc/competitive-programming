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
    ll n, l, r;
    cin >> n >> l >> r;
    vi a(n);
    fl(i, n) cin >> a[i];
    sort(all(a));
    ll cnt = 0;
    fl(i,n){
        ll low = l - a[i];
        ll high = r - a[i];
        auto it_low = lower_bound(a.begin() + i + 1, a.end(), low);
        auto it_high = upper_bound(a.begin() + i + 1, a.end(), high);
        cnt += (it_high - it_low);
    }
    cout << cnt nl;
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
 of n
 integers. Find the number of pairs (i,j)
 (1≤i<j≤n
) where the sum of ai+aj
 is greater than or equal to l
 and less than or equal to r
 (that is, l≤ai+aj≤r
).

For example, if n=3
, a=[5,1,2]
, l=4
 and r=7
, then two pairs are suitable:

i=1
 and j=2
 (4≤5+1≤7
);
i=1
 and j=3
 (4≤5+2≤7
).
Input
The first line contains an integer t
 (1≤t≤104
). Then t
 test cases follow.

The first line of each test case contains three integers n,l,r
 (1≤n≤2⋅105
, 1≤l≤r≤109
) — the length of the array and the limits on the sum in the pair.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
).

It is guaranteed that the sum of n
 overall test cases does not exceed 2⋅105
.

Output
For each test case, output a single integer — the number of index pairs (i,j)
 (i<j
), such that l≤ai+aj≤r
.

Example
InputCopy
4
3 4 7
5 1 2
5 5 8
5 1 2 4 3
4 100 1000
1 1 1 1
5 9 13
2 5 5 1 1
OutputCopy
2
7
0
1


*/