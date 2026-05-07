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
    ll n;
    cin >> n;
    vi a(n);
    ll mx=0, s = 0;
    for (ll i = 0; i < n;i++){
        cin >> a[i];
        s += a[i];
        mx = max(mx, a[i]);
    }
    if(s%2==0 && mx<=s/2){
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
    solve();
    return 0;
}
/*
You are given an array a1,a2,…,an
.

In one operation you can choose two elements ai
 and aj
 (i≠j
) and decrease each of them by one.

You need to check whether it is possible to make all the elements equal to zero or not.

Input
The first line contains a single integer n
 (2≤n≤105
) — the size of the array.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the elements of the array.

Output
Print "YES" if it is possible to make all elements zero, otherwise print "NO".

Examples
InputCopy
4
1 1 2 2
OutputCopy
YES
InputCopy
6
1 2 3 4 5 6
OutputCopy
NO
Note
In the first example, you can make all elements equal to zero in 3
 operations:

Decrease a1
 and a2
,
Decrease a3
 and a4
,
Decrease a3
 and a4
In the second example, one can show that it is impossible to make all elements equal to zero.



*/