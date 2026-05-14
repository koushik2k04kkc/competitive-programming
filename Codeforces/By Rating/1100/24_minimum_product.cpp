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

void solve()
{
    int a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    int n_a = 0, n_b = 0,cnt=0;
    ll a1 = a, b1 = b, n1 = n;
    ll da = min(a1 - x, n1);
    a1 -= da;
    n1 -= da;
    ll db = min(b1 - y, n1);
    b1 -= db;
    ll ans1 = a1 * b1;
    ll a2 = a, b2 = b, n2 = n;
    ll db2 = min(b2 - y, n2);
    b2 -= db2;
    n2 -= db2;
    ll da2 = min(a2 - x, n2);
    a2 -= da2;
    ll ans2 = a2 * b2;
    cout << min(ans1, ans2) nl;
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
You are given four integers a
, b
, x
 and y
. Initially, a≥x
 and b≥y
. You can do the following operation no more than n
 times:

Choose either a
 or b
 and decrease it by one. However, as a result of this operation, value of a
 cannot become less than x
, and value of b
 cannot become less than y
.
Your task is to find the minimum possible product of a
 and b
 (a⋅b
) you can achieve by applying the given operation no more than n
 times.

You have to answer t
 independent test cases.

Input
The first line of the input contains one integer t
 (1≤t≤2⋅104
) — the number of test cases. Then t
 test cases follow.

The only line of the test case contains five integers a
, b
, x
, y
 and n
 (1≤a,b,x,y,n≤109
). Additional constraint on the input: a≥x
 and b≥y
 always holds.

Output
For each test case, print one integer: the minimum possible product of a
 and b
 (a⋅b
) you can achieve by applying the given operation no more than n
 times.

Example
InputCopy
7
10 10 8 5 3
12 8 8 7 2
12343 43 4543 39 123212
1000000000 1000000000 1 1 1
1000000000 1000000000 1 1 1000000000
10 11 2 1 5
10 11 9 1 10
OutputCopy
70
77
177177
999999999000000000
999999999
55
10
Note
In the first test case of the example, you need to decrease b
 three times and obtain 10⋅7=70
.

In the second test case of the example, you need to decrease a
 one time, b
 one time and obtain 11⋅7=77
.

In the sixth test case of the example, you need to decrease a
 five times and obtain 5⋅11=55
.

In the seventh test case of the example, you need to decrease b
 ten times and obtain 10⋅1=10
.

*/