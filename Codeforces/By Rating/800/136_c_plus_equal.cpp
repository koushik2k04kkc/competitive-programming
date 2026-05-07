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

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;
    int ans = 0;
    while(n>=a && n>=b){
        if(a>=b){
            b += a;
            ans++;
        } else{
            a += b;
            ans++;
        }
    }
    cout << ans << nl;
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
Leo has developed a new programming language C+=. In C+=, integer variables can only be changed with a "+=" operation that adds the right-hand side value to the left-hand side variable. For example, performing "a += b" when a = 2
, b = 3
 changes the value of a to 5
 (the value of b does not change).

In a prototype program Leo has two integer variables a and b, initialized with some positive values. He can perform any number of operations "a += b" or "b += a". Leo wants to test handling large integers, so he wants to make the value of either a or b strictly greater than a given value n
. What is the smallest number of operations he has to perform?

Input
The first line contains a single integer T
 (1≤T≤100
) — the number of test cases.

Each of the following T
 lines describes a single test case, and contains three integers a,b,n
 (1≤a,b≤n≤109
) — initial values of a and b, and the value one of the variables has to exceed, respectively.

Output
For each test case print a single integer — the smallest number of operations needed. Separate answers with line breaks.

Example
InputCopy
2
1 2 3
5 4 100
OutputCopy
2
7
Note
In the first case we cannot make a variable exceed 3
 in one operation. One way of achieving this in two operations is to perform "b += a" twice.



*/