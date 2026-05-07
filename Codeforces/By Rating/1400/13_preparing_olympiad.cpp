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
    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    vi a(n);
    fl(i, n) cin >> a[i];
    ll ans = 0;
    for (int j = 0; j < (1 << n); ++j) {
        vi cho;
        ll sum = 0;
        fl(i,n){
            if (j & (1 << i)) {
                cho.pb(a[i]);
                sum += a[i];
            }
        }
        if (cho.size() >= 2) {
            ll mn = *min_element(all(cho));
            ll mx = *max_element(all(cho));
            if (sum >= l && sum <= r && mx - mn >= x) {
                ans++;
            }
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
You have n problems. You have estimated the difficulty of the i-th one as integer ci. Now you want to prepare a problemset for a contest, using some of the problems you've made.

A problemset for the contest must consist of at least two problems. You think that the total difficulty of the problems of the contest must be at least l and at most r. Also, you think that the difference between difficulties of the easiest and the hardest of the chosen problems must be at least x.

Find the number of ways to choose a problemset for the contest.

Input
The first line contains four integers n, l, r, x (1 ≤ n ≤ 15, 1 ≤ l ≤ r ≤ 109, 1 ≤ x ≤ 106) — the number of problems you have, the minimum and maximum value of total difficulty of the problemset and the minimum difference in difficulty between the hardest problem in the pack and the easiest one, respectively.

The second line contains n integers c1, c2, ..., cn (1 ≤ ci ≤ 106) — the difficulty of each problem.

Output
Print the number of ways to choose a suitable problemset for the contest.

Examples
InputCopy
3 5 6 1
1 2 3
OutputCopy
2
InputCopy
4 40 50 10
10 20 30 25
OutputCopy
2
InputCopy
5 25 35 10
10 10 20 10 20
OutputCopy
6
Note
In the first example two sets are suitable, one consisting of the second and third problem, another one consisting of all three problems.

In the second example, two sets of problems are suitable — the set of problems with difficulties 10 and 30 as well as the set of problems with difficulties 20 and 30.

In the third example any set consisting of one problem of difficulty 10 and one problem of difficulty 20 is suitable.


*/