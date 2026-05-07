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
#define eb(v) v.rbegin(), v.rend()

typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    ll n, c;
    cin >> n >> c;
    vi a(n);
    fl(i, n) cin >> a[i];
    vi tk;
    fl(i,n){
        ll cost = a[i] + (i + 1);
        tk.pb(cost);
    }
    sort(be(tk));
    int cnt = 0;
    fl(i,n){
        if(c>=tk[i]){
            c -= tk[i];
            cnt++;}
            else{
                break;
            }
    }
    cout << cnt nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/*
The only difference between the easy and hard versions are the locations you can teleport to.

Consider the points 0,1,…,n
 on the number line. There is a teleporter located on each of the points 1,2,…,n
. At point i
, you can do the following:

Move left one unit: it costs 1
 coin.
Move right one unit: it costs 1
 coin.
Use a teleporter at point i
, if it exists: it costs ai
 coins. As a result, you teleport to point 0
. Once you use a teleporter, you can't use it again.
You have c
 coins, and you start at point 0
. What's the most number of teleporters you can use?

Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤1000
) — the number of test cases. The descriptions of the test cases follow.

The first line of each test case contains two integers n
 and c
 (1≤n≤2⋅105
; 1≤c≤109
)  — the length of the array and the number of coins you have respectively.

The following line contains n
 space-separated integers a1,a2,…,an
 (1≤ai≤109
) — the costs to use the teleporters.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the maximum number of teleporters you can use.

Example
InputCopy
10
5 6
1 1 1 1 1
8 32
100 52 13 6 9 4 100 35
1 1
5
4 5
4 3 2 1
5 9
2 3 1 4 1
5 8
2 3 1 4 1
4 3
2 3 4 1
4 9
5 4 3 3
2 14
7 5
5 600000000
500000000 400000000 300000000 200000000 100000000
OutputCopy
2
2
0
1
2
2
1
1
1
2
Note
In the first test case, you can move one unit to the right, use the teleporter at index 1
 and teleport to point 0
, move two units to the right and use the teleporter at index 2
. You are left with 6−1−1−2−1=1
 coins you don't have enough coins to use another teleporter. You have used two teleporters, so the answer is two.

In the second test case, you go four units to the right and use the teleporter to go to 0
, then go six units right and use the teleporter at index 6
 to go to 0
. The total cost will be 4+6+6+4=20
. You are left with 12
 coins, but it is not enough to reach any other teleporter and use it so the answer is 2
.

In the third test case, you don't have enough coins to use any teleporter, so the answer is zero.
*/