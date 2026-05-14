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
    int n, k;
    cin >> n >> k;
    vi a(n), b(n);
    ll ans = 0;
    fl(i, n) cin >> a[i];
    fl(i, n) cin >> b[i];
    fl(i, n) ans += abs(a[i] - b[i]);
    vector<pll> p(n);
    fl(i,n)
    {
        p[i].first = min(a[i], b[i]);
        p[i].second = max(a[i], b[i]);
    }
    sort(all(p));
    ll end = p[0].second, mn = LLONG_MAX;
    for (int i = 1; i < n; i++)
    {
        mn = min(mn, max(0LL, (p[i].first - end) * 2));
        end = p[i].second;
    }
    cout << ans + mn nl;
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
Ali and Bahamin decided to spend their summer vacation on the beautiful southern coasts of Iran. They also agreed to do some shopping during the trip — but instead of setting a fixed budget, they decided to determine how much they would spend by playing a game.

The game is played on two arrays a
 and b
, each containing n
 integers.

The game will last for k
 rounds. In one round:

First, Ali selects two indices i
 and j
 (1≤i<j≤n
);
Then, Bahamin rearranges the four integers ai
, aj
, bi
, and bj
 arbitrarily. Note that Bahamin can swap numbers between two arrays. He can also keep the two arrays unchanged.
After all the k
 rounds, the value of the game is defined as v=∑i=1n|ai−bi|
. Ali and Bahamin will spend exactly v
 coins during their trip.

However, their goals are quite different:

Ali wants to spend as little as possible, that is, to minimize v
;
Bahamin wants to spend as much as possible, that is, to maximize v
.
You have to find the final amount of coins they will spend if both Ali and Bahamin play optimally.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains two integers n
 and k
 (2≤n≤2⋅105
, 1≤k≤n
) — the length of a
 and b
, and the number of rounds.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the elements of a
.

The third line contains n
 integers b1,b2,…,bn
 (1≤bi≤109
) — the elements of b
.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output a single integer — the final amount of coins they will spend if both Ali and Bahamin play optimally.

Example
InputCopy
5
2 1
1 7
3 5
3 2
1 5 3
6 2 4
5 4
1 16 10 10 16
3 2 2 15 15
4 1
23 1 18 4
19 2 10 3
10 10
4 3 2 100 4 1 2 4 5 5
1 200 4 5 6 1 10 2 3 4
OutputCopy
8
9
30
16
312
Note
In the first test case, Ali can only choose (i,j)=(1,2)
, and Bahamin can rearrange all four numbers. Thus, he can assign a=[5,1]
 and b=[3,7]
. And the value of the game will be v=|5−3|+|1−7|=8
. It can be shown that this is the maximum possible value reachable for Bahamin — Other arrangements like a=[5,7], b=[1,3]
 are also possible, but they don't have larger values.

In the second test case, the best strategy for Bahamin is to keep the two arrays unchanged, regardless of what indices Ali selects. And the value of the game will be v=|1−6|+|5−2|+|3−4|=9
.



*/