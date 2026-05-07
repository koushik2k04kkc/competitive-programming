#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

typedef unsigned long long int ull;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pi;
typedef pair<char, ll> pci;
typedef vector<pi> vii;
typedef map<ll, ll> mi;
typedef map<char, ll> mci;
typedef set<ll> seti;
typedef set<char> setc;
typedef unordered_set<ll> useti;
typedef unordered_set<char> usetc;

// Koushik Kumar Chakraborty (●'◡'●)

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    fl(i,n){
        cin >> a[i];
    }
    int x = 0;
    fl(i, n)
    {
        x = a[i] ^ x;
    }
    if (x == 0)
    {
        cout << 0 nl;
    }
    else if (n % 2 != 0)
    {
        cout << x nl;
    }
    else
    {
        cout << -1 nl;
    }
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
There is an array a
 consisting of non-negative integers. You can choose an integer x
 and denote bi=ai⊕x
 for all 1≤i≤n
, where ⊕
 denotes the bitwise XOR operation. Is it possible to choose such a number x
 that the value of the expression b1⊕b2⊕…⊕bn
 equals 0
?

It can be shown that if a valid number x
 exists, then there also exists x
 such that (0≤x<28
).

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤1000
). The description of the test cases follows.

The first line of the test case contains one integer n
 (1≤n≤103
) — the length of the array a
.

The second line of the test case contains n
 integers — array a
 (0≤ai<28
).

It is guaranteed that the sum of n
 over all test cases does not exceed 103
.

Output
For each set test case, print the integer x
 (0≤x<28
) if it exists, or −1
 otherwise.

Example
InputCopy
5
3
1 2 5
3
1 2 3
4
0 1 2 3
4
1 2 2 3
1
1
OutputCopy
6
0
3
-1
1
Note
In the first test case, after applying the operation with the number 6
 the array b
 becomes [7,4,3]
, 7⊕4⊕3=0
.

There are other answers in the third test case, such as the number 0
.



*/