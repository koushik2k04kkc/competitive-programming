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
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

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
    ll n;
    cin >> n;      
    int ans = 0;
    while (n != 1)
    {
        if (n % 6 == 0)
        {
            n /= 6;
        }
        else if (n % 3 == 0)
        {
            n *= 2;
        }
        else
        {
            ans = -1;
            break;
        }
        ans++;
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
You are given an integer n
. In one move, you can either multiply n
 by two or divide n
 by 6
 (if it is divisible by 6
 without the remainder).

Your task is to find the minimum number of moves needed to obtain 1
 from n
 or determine if it's impossible to do that.

You have to answer t
 independent test cases.

Input
The first line of the input contains one integer t
 (1≤t≤2⋅104
) — the number of test cases. Then t
 test cases follow.

The only line of the test case contains one integer n
 (1≤n≤109
).

Output
For each test case, print the answer — the minimum number of moves needed to obtain 1
 from n
 if it's possible to do that or -1 if it's impossible to obtain 1
 from n
.

Example
InputCopy
7
1
2
3
12
12345
15116544
387420489
OutputCopy
0
-1
2
-1
-1
12
36
Note
Consider the sixth test case of the example. The answer can be obtained by the following sequence of moves from the given integer 15116544
:

Divide by 6
 and get 2519424
;
divide by 6
 and get 419904
;
divide by 6
 and get 69984
;
divide by 6
 and get 11664
;
multiply by 2
 and get 23328
;
divide by 6
 and get 3888
;
divide by 6
 and get 648
;
divide by 6
 and get 108
;
multiply by 2
 and get 216
;
divide by 6
 and get 36
;
divide by 6
 and get 6
;
divide by 6
 and get 1
.


*/