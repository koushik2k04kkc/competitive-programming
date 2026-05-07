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

ll ds(ll x)
{
    ll s = 0;
    while (x > 0)
    {
        s += x % 10;
        x /= 10;
    }
    return s;
}

int ans[200001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ans[0] = 0;
    for (int i = 1; i <= 200000; i++)
    {
        ans[i] = ans[i - 1] + ds(i);
    }
    ll t ;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << ans[n] << nl;
}
return 0;
}
/*
Please note that the time limit for this problem is only 0.5 seconds per test.

Vladislav wrote the integers from 1
 to n
, inclusive, on the board. Then he replaced each integer with the sum of its digits.

What is the sum of the numbers on the board now?

For example, if n=12
 then initially the numbers on the board are:
1,2,3,4,5,6,7,8,9,10,11,12.
Then after the replacement, the numbers become:
1,2,3,4,5,6,7,8,9,1,2,3.
The sum of these numbers is 1+2+3+4+5+6+7+8+9+1+2+3=51
. Thus, for n=12
 the answer is 51
.

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases.

The only line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the largest number Vladislav writes.

Output
For each test case, output a single integer — the sum of the numbers at the end of the process.

Example
InputCopy
7
12
1
2
3
1434
2024
200000
OutputCopy
51
1
3
6
18465
28170
4600002


*/