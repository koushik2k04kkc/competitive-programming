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
    int n, q;
    cin >> n >> q;
    vi a(n);
    fl(i, n) cin >> a[i];
    vi f(n + 1, 0);
    fl(i,q){
        int l, r;
        cin >> l >> r;
        f[l - 1] += 1;
        if(r<n){
            f[r] -= 1;
        }
    }
    for (int i = 1; i < n;i++){
        f[i] += f[i - 1];
    }
    f.pop_back();
    sort(all(a));
    sort(all(f));
    ll ans = 0;
    fl(i,n){
        ans += a[i] * f[i];
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
The little girl loves the problems on array queries very much.

One day she came across a rather well-known problem: you've got an array of n
 elements (the elements of the array are indexed starting from 1); also, there are q
 queries, each one is defined by a pair of integers li
, ri
 (1≤li≤ri≤n)
. You need to find for each query the sum of elements of the array with indexes from li
 to ri
, inclusive.

The little girl found the problem rather boring. She decided to reorder the array elements before replying to the queries in a way that makes the sum of query replies maximum possible. Your task is to find the value of this maximum sum.

Input
The first line contains two space-separated integers n
 (1≤n≤2⋅105
) and q
 (1≤q≤2⋅105
) — the number of elements in the array and the number of queries, correspondingly.

The next line contains n
 space-separated integers ai
 (1≤ai≤2⋅105
) — the array elements.

Each of the following q
 lines contains two space-separated integers li
 and ri
 (1≤li≤ri≤n
) — the i
-th query.

Output
In a single line print, a single integer — the maximum sum of query replies after the array elements are reordered.

Please, do not use the %lld specifier to read or write 64-bit integers in C++. It is preferred to use the cin, cout streams or the %I64d specifier.

Examples
InputCopy
3 3
5 3 2
1 2
2 3
1 3
OutputCopy
25
InputCopy
5 3
5 2 4 1 3
1 5
2 3
2 3
OutputCopy
33

*/