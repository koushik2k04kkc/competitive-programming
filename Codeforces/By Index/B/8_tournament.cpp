#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define be(v) v.begin(), v.end()
#define eb(v) v.end(), v.begin()

typedef unsigned long long int ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;
typedef unordered_set<ll> usll;
typedef unordered_set<char> usc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n, j, k;
    cin >> n >> j >> k;
    vi a(n);
    fl (i,n){
        cin >> a[i];
    }
    int str = a[j - 1];
    if (k > 1)
    {

        py;
    }
    else
    {
        int mx = *max_element(a.begin(), a.end());
        cout << (str == mx ? "YES\n" : "NO\n");
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
You are given an array of integers a1,a2,…,an
. A tournament is held with n
 players. Player i
 has strength ai
.

While more than k
 players remain,

Two remaining players are chosen at random;
Then the chosen player with the lower strength is eliminated. If the chosen players have the same strength, one is eliminated at random.
Given integers j
 and k
 (1≤j,k≤n
), determine if there is any way for player j
 to be one of the last k
 remaining players.

Input
The first line contains an integer t
 (1≤t≤104
)  — the number of test cases.

The first line of each test case contains three integers n
, j
, and k
 (2≤n≤2⋅105
, 1≤j,k≤n
).

The second line of each test case contains n
 integers, a1,a2,…,an
 (1≤ai≤n
).

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output on a single line "YES" if player j
 can be one of the last k
 remaining players, and "NO" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

Example
InputCopy
3
5 2 3
3 2 4 4 1
5 4 1
5 3 4 5 2
6 1 1
1 2 3 4 5 6
OutputCopy
YES
YES
NO
Note
In the first sample, suppose that players 2
 and 5
 are chosen. Then player 2
 defeats player 5
. Now, the remaining player strengths are

3	2	4	4
Next, suppose that players 3
 and 4
 are chosen. Then player 3
 might defeat player 4
. Now, the remaining player strengths are
3	2	4
Player 2
 is one of the last three players remaining.
In the third sample, it can be shown that there is no way for player 1
 to be the last player remaining.
*/