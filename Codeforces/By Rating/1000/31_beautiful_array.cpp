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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;
    if (b * k > s)
    {
        cout << -1 << '\n';
        return;
    }
    vector<ll> a(n + 1, 0);
    a[1] = b * k;
    ll left = s - b * k;
    for (int i = 1; i <= n; i++)
    {
        ll x = min(left, k - 1);
        a[i] += x;
        left -= x;
    }
    if (left != 0)
    {
        cout << -1 << '\n';
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << ' ';
    }
    cout nl;
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
Stanley defines the beauty of an array a
 of length n
, which contains non-negative integers, as follows:
∑i=1n⌊aik⌋,
which means that we divide each element by k
, round it down, and sum up the resulting values.

Stanley told Sam the integer k
 and asked him to find an array a
 of n
 non-negative integers, such that the beauty is equal to b
 and the sum of elements is equal to s
. Help Sam — find any of the arrays satisfying the conditions above.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤1000
). Description of the test cases follows.

The first line of each test case contains integers n
, k
, b
, s
 (1≤n≤105
, 1≤k≤109
, 0≤b≤109
, 0≤s≤1018
).

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case print −1
 if such array a
 does not exist. Otherwise print n
 non-negative integers a1,a2,…,an
 (0≤ai≤1018
) — the answer.

Example
InputCopy
8
1 6 3 100
3 6 3 12
3 6 3 19
5 4 7 38
5 4 7 80
99978 1000000000 100000000 1000000000000000000
1 1 0 0
4 1000000000 1000000000 1000000000000000000
OutputCopy
-1
-1
0 0 19
0 3 3 3 29
-1
-1
0
0 0 0 1000000000000000000
Note
In the first, the second, the fifth and the sixth test cases of the example it is possible to show that such array does not exist.

In the third testcase of the example a=[0,0,19]
. The sum of elements in it is equal to 19, the beauty of it is equal to (⌊06⌋+⌊06⌋+⌊196⌋)=(0+0+3)=3
.

In the fourth testcase of the example a=[0,3,3,3,29]
. The sum of elements in it is equal to 38
, the beauty of it is equal to (0+0+0+0+7)=7
.



*/