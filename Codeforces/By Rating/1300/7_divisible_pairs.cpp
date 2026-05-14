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
typedef map<ll, ll> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vi a(n, 0);
    map < ll,vi> mp;
    fl(i,n){
        cin >> a[i];
        mp[a[i] % y].pb(a[i]);
    }
    ll ans = 0;
    for(auto it:mp){
        vi v = it.second;
        mii mp1;
       fl(i,v.size()){
           mp1[v[i] % x]++;
       }
       for(auto it:mp1){
           if(it.first==0||(it.first==x/2&&x%2==0)){
               ll cnt = it.second;
               ans+=(cnt*(cnt-1))/2;
               it.second = 0;
           } else{
               ll cnt1 = it.second;
               ll cnt2 = mp1[x - it.first];
               ans += cnt1 * cnt2;
               mp1[x - it.first] = 0;
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
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/*
Polycarp has two favorite integers x
 and y
 (they can be equal), and he has found an array a
 of length n
.

Polycarp considers a pair of indices ⟨i,j⟩
 (1≤i<j≤n
) beautiful if:

ai+aj
 is divisible by x
;
ai−aj
 is divisible by y
.
For example, if x=5
, y=2
, n=6
, a=
[1,2,7,4,9,6
], then the only beautiful pairs are:

⟨1,5⟩
: a1+a5=1+9=10
 (10
 is divisible by 5
) and a1−a5=1−9=−8
 (−8
 is divisible by 2
);
⟨4,6⟩
: a4+a6=4+6=10
 (10
 is divisible by 5
) and a4−a6=4−6=−2
 (−2
 is divisible by 2
).
Find the number of beautiful pairs in the array a
.
Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases. Then the descriptions of the test cases follow.

The first line of each test case contains three integers n
, x
, and y
 (2≤n≤2⋅105
, 1≤x,y≤109
) — the size of the array and Polycarp's favorite integers.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the elements of the array.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output a single integer — the number of beautiful pairs in the array a
.

Example
InputCopy
7
6 5 2
1 2 7 4 9 6
7 9 5
1 10 15 3 8 12 15
9 4 10
14 10 2 2 11 11 13 5 6
9 5 6
10 7 6 7 9 7 7 10 10
9 6 2
4 9 7 1 2 2 13 3 15
9 2 3
14 6 1 15 12 15 8 2 15
10 5 7
13 3 3 2 12 11 3 7 13 14
OutputCopy
2
0
1
3
5
7
0
*/