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
    ll n, m;
    cin >> n >> m;
    vi a(n), b(m);
    fl(i, n) cin >> a[i];
    fl(i, m) cin >> b[i];
    sort(all(a));
    fl(i,m){
        ll x = b[i];
        ll l = 0, h = n - 1;
        ll ans = -1;
        while(l<=h){
        ll mid = (l + h) / 2;
        if(a[mid]<=x){
            ans = mid;
            l = mid + 1;
        } else{
            h = mid - 1;
        }
    }
    cout << ans + 1 << " ";
    }
    cout nl;
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
You are given two arrays of integers a and b. For each element of the second array bj you should find the number of elements in array a that are less than or equal to the value bj.

Input
The first line contains two integers n, m (1 ≤ n, m ≤ 2·105) — the sizes of arrays a and b.

The second line contains n integers — the elements of array a ( - 109 ≤ ai ≤ 109).

The third line contains m integers — the elements of array b ( - 109 ≤ bj ≤ 109).

Output
Print m integers, separated by spaces: the j-th of which is equal to the number of such elements in array a that are less than or equal to the value bj.

Examples
InputCopy
5 4
1 3 5 7 9
6 4 2 8
OutputCopy
3 2 1 4
InputCopy
5 5
1 2 1 2 5
3 1 4 1 5
OutputCopy
4 2 4 2 5

*/