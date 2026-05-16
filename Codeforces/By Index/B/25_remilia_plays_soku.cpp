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
    ll n,x,y,k;
    cin >> n >> x >> y >> k;
    ll diff = abs(x-y);
    ll d = min(diff,n-diff);
    if (n <= 3) {
        cout << 1 << nl;
    } else {
        cout << d + k << nl;
    }
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
Remilia is trying to escape, while Reimu wants to land the final hit.

The playing field consists of n positions arranged in a circle. For each 1≤i<n, positions i and i+1 are adjacent, and positions 1 and n are also adjacent.

Initially, at time 0, Reimu is at position x1 and Remilia is at position x2, where x1≠x2.

Each second, the following happens in order:

    Remilia either moves to an adjacent position or stays in place. Over the entire game, she may move to an adjacent position at most k times.
    After observing Remilia's action, Reimu either moves to an adjacent position or stays in place.
    If they are at the same position after both actions, Reimu catches Remilia and the game ends. 

Assuming both players play optimally, Reimu always tries to minimize the catching time, while Remilia tries to maximize it.

Find the number of seconds until Reimu catches Remilia.
Input

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤104). The description of the test cases follows.

The only line of each test case contains four integers n, x1, x2 and k (2≤n≤108, 1≤x1,x2≤n, x1≠x2, 0≤k≤108).
Output

For each test case, output the number of seconds until Reimu catches Remilia, assuming both players play optimally.
Example
Input
Copy

4
2 1 2 0
4 3 2 1
4 2 3 1
16 8 4 2

Output
Copy

1
2
2
6

Note

In the first test case, one possible sequence of actions is:

    In the first second, Remilia stays in place, and then Reimu moves to 2 and catches Remilia. 

In the second test case, one possible sequence of actions is:

    In the first second, Remilia moves to 1, and then Reimu moves to 2.
    In the second second, Remilia cannot move and has to stay in place, and then Reimu moves to 1 and catches Remilia. 
*/