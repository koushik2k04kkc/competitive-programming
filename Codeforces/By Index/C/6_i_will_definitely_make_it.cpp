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
    vi a(n);
    fl(i, n) cin >> a[i];
    ll s = a[k - 1];
    ll h = *max_element(all(a));
    if (s == h)
    {
        py;
        return;
    }
    vi arr;
    for (auto x : a){
        if (x > s)
            arr.pb(x);
    }
    sort(all(arr));
    arr.erase(unique(all(arr)), arr.end());
    ll tra = s;
    for (auto x : arr)
    {
        if (x <= tra + s) //(x-tra)<=s, tahole panite dubbe na
        {
            tra = x;
            if (tra == h)
                break;
        }
        else
        {
            break;
        }
    } 
    if(tra==h){
        py;
    } else{
        pn;
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

You are given n
 towers, numbered from 1
 to n
. Tower i
 has a height of hi
. At time 0
, you are on the tower with index k
, and the current water level is 1
.

Every second, the water level rises by 1
 unit. At any moment, if the water level becomes strictly greater than the height of the tower you are on, you perish.

You have a magical ability: at moment x
, you can start teleporting from tower i
 to tower j
, which will take |hi−hj|
 seconds. That is, until moment x+|hi−hj|
, you will be on tower i
, and at moment x+|hi−hj|
, you will move to tower j
. You can start a new teleportation at the same moment you just arrived at tower j
.

For example, if n=k=4
, h=[4,4,4,2]
, then if you start teleporting from tower 4
 to tower 1
 at moment 0
, the movement will look as follows:


Note that if the height of tower 1
 were 5
, you would not be able to teleport to it immediately, as you would be submerged at moment 2
.

Your goal is to reach any tower with the maximum height before the water covers you.

Determine if this is possible.

Input
Each test consists of several test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers n
 and k
 (1≤k≤n≤105
) — the number of towers and the index of the tower you are initially on.

The second line contains n
 integers h1,h2,…,hn
 (1≤hi≤109
) — the heights of the towers.

It is guaranteed that the sum of all n
 across all test cases does not exceed 105
.

Output
For each test case, output one line: "YES", if you can reach the tower with the maximum height before the water covers you, or "NO" otherwise.

You may output each letter in any case (lowercase or uppercase). For example, the strings "yEs", "yes", "Yes", and "YES" will be accepted as a positive answer.

Example
InputCopy
5
5 3
3 2 1 4 5
3 1
1 3 4
4 4
4 4 4 2
6 2
2 3 6 9 1 2
4 2
1 2 5 6
OutputCopy
YES
NO
YES
YES
NO
Note
In the first test case, the only possible path is: 3→2→1→4→5
.

In the second test case, regardless of the order, it will not be possible to reach the tallest tower.

In the third test case, one of the possible paths is: 4→1
.


*/