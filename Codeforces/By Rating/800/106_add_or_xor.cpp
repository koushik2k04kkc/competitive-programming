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
    int a, b, x, y;
    cin >> a >> b >> x >> y;
    if(a-1>b||(b<a &&a%2==0)){
        cout << -1 nl;
        return;
    }
    if(a-1==b){
        cout << y nl;
        return;
    }
    int ans = 0;
    while(a!=b){
        if(a%2==0) ans += min(x, y); 
        else ans += x;
        a++;
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
You are given two non-negative integers a,b
. You can apply two types of operations on a
 any number of times and in any order:

a←a+1
. The cost of this operation is x
;
a←a⊕1
, where ⊕
 denotes the bitwise XOR operation. The cost of this operation is y
.
Now you are asked to make a=b
. If it's possible, output the minimum cost; otherwise, report it.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The only line of each test case contains four integers a,b,x,y
 (1≤a,b≤100,1≤x,y≤107
) — the two integers given to you and the respective costs of two types of operations.

Output
For each test case, output an integer — the minimum cost to make a=b
, or −1
 if it is impossible.

Example
InputCopy
7
1 4 1 2
1 5 2 1
3 2 2 1
1 3 2 1
2 1 1 2
3 1 1 2
1 100 10000000 10000000
OutputCopy
3
6
1
3
-1
-1
990000000
Note
In the first test case, the optimal strategy is to apply a←a+1
 three times. The total cost is 1+1+1=3
.

In the second test case, the optimal strategy is to apply a←a+1
, a←a⊕1
, a←a+1
, a←a⊕1
 in order. The total cost is 2+1+2+1=6
.

In the fifth test case, it can be proved that there isn't a way to make a=b
.



*/