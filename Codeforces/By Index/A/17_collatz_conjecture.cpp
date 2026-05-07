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
    ll k, x;
    cin >> k >> x;
    while(k--){
        x *= 2;
    }
    cout << x nl;
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
You are doing a research paper on the famous Collatz Conjecture. In your experiment, you start off with an integer x
, and you do the following procedure k
 times:

If x
 is even, divide x
 by 2
.
Otherwise, set x
 to 3⋅x+1
.
For example, starting off with 21
 and doing the procedure 5
 times, you get 21→64→32→16→8→4
.

After all k
 iterations, you are left with the final value of x
. Unfortunately, you forgot the initial value. Please output any possible initial value of x
.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤400
). The description of the test cases follows.

The first line of each test case contains two integers k
 and x
 (1≤k,x≤20
).

Output
For each test case, print any possible initial value on a new line. It can be shown that the answer always exists.

Example
InputCopy
3
1 4
1 5
5 4
OutputCopy
1
10
21
Note
In the first test case, since 1
 is odd, performing the procedure k=1
 times results in 1⋅3+1=4
, so 1
 is a valid output.

In the second test case, since 10
 is even, performing the procedure k=1
 times results in 102=5
, so 10
 is a valid output.

The third test case is explained in the statement.



*/