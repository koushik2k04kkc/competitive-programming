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
ll calc(const vi& a,ll h){
    ll w = 0;
   for(int hei : a){
    if(h>hei){
        w += (h - hei);
    }
   }
   return w;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vi a(n);
    ll mx = 0;
    fl(i, n) {
        cin >> a[i];
        mx = max(mx,a[i]);
    }
    ll low = 1, high = mx + x, ans = 1;
    while(low<=high){
        ll mid = (low + high) / 2;
        ll need = calc(a, mid);
        if(need<=x){
            ans = mid;
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    cout << ans nl;
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
You love fish, that's why you have decided to build an aquarium. You have a piece of coral made of n
 columns, the i
-th of which is ai
 units tall. Afterwards, you will build a tank around the coral as follows:

Pick an integer h≥1
 — the height of the tank. Build walls of height h
 on either side of the tank.
Then, fill the tank up with water so that the height of each column is h
, unless the coral is taller than h
; then no water should be added to this column.
For example, with a=[3,1,2,4,6,2,5]
 and a height of h=4
, you will end up using a total of w=8
 units of water, as shown.

You can use at most x
 units of water to fill up the tank, but you want to build the biggest tank possible. What is the largest value of h
 you can select?
Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two positive integers n
 and x
 (1≤n≤2⋅105
; 1≤x≤109
) — the number of columns of the coral and the maximum amount of water you can use.

The second line of each test case contains n
 space-separated integers ai
 (1≤ai≤109
) — the heights of the coral.

The sum of n
 over all test cases doesn't exceed 2⋅105
.

Output
For each test case, output a single positive integer h
 (h≥1
) — the maximum height the tank can have, so you need at most x
 units of water to fill up the tank.

We have a proof that under these constraints, such a value of h
 always exists.

Example
InputCopy
5
7 9
3 1 2 4 6 2 5
3 10
1 1 1
4 1
1 4 3 4
6 1984
2 6 5 9 1 8
1 1000000000
1
OutputCopy
4
4
2
335
1000000001
Note
The first test case is pictured in the statement. With h=4
 we need 8
 units of water, but if h
 is increased to 5
 we need 13
 units of water, which is more than x=9
. So h=4
 is optimal.

In the second test case, we can pick h=4
 and add 3
 units to each column, using a total of 9
 units of water. It can be shown that this is optimal.

In the third test case, we can pick h=2
 and use all of our water, so it is optimal.
*/