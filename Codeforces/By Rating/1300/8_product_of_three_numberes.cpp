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
    int n;
    cin >> n;
    vi a;
    for (int i = 2; i * i <= n;i++){
        if(n%i!=0){
            continue;
        }
        a.pb(i);
        n /= i;
        if(a.size()==2){
            break;
        }
    }
    if(n==1 || a.size()<2|| n==a[0]||n==a[1]){
        pn;
    } else{
        py;
        cout << a[0] << " " << a[1] << " " << n nl;
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
You are given one integer number n
. Find three distinct integers a,b,c
 such that 2≤a,b,c
 and a⋅b⋅c=n
 or say that it is impossible to do it.

If there are several answers, you can print any.

You have to answer t
 independent test cases.

Input
The first line of the input contains one integer t
 (1≤t≤100
) — the number of test cases.

The next n
 lines describe test cases. The i
-th test case is given on a new line as one integer n
 (2≤n≤109
).

Output
For each test case, print the answer on it. Print "NO" if it is impossible to represent n
 as a⋅b⋅c
 for some distinct integers a,b,c
 such that 2≤a,b,c
.

Otherwise, print "YES" and any possible such representation.

Example
InputCopy
5
64
32
97
2
12345
OutputCopy
YES
2 4 8
NO
NO
NO
YES
3 5 823


*/