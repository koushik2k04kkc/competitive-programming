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
    int total_twos = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 2)
            total_twos++;
    }
    int left_twos = 0;
    for (int k = 0; k < n - 1; k++)
    {
        if (a[k] == 2)
            left_twos++;
        int right_twos = total_twos - left_twos;
        if (left_twos == right_twos)
        {
            cout << k + 1 << "\n";
            return;
        }
    }
    cout << "-1\n";
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
You are given a sequence a1,a2,…,an
. Each element of a
 is 1
 or 2
.

Find out if an integer k
 exists so that the following conditions are met.

1≤k≤n−1
, and
a1⋅a2⋅…⋅ak=ak+1⋅ak+2⋅…⋅an
.
If there exist multiple k
 that satisfy the given condition, print the smallest.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤100
). Description of the test cases follows.

The first line of each test case contains one integer n
 (2≤n≤1000
).

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤2
).

Output
For each test case, if there is no such k
, print −1
.

Otherwise, print the smallest possible k
.

Example
InputCopy
3
6
2 2 1 2 1 2
3
1 2 1
4
1 1 1 1
OutputCopy
2
-1
1
Note
For the first test case, k=2
 satisfies the condition since a1⋅a2=a3⋅a4⋅a5⋅a6=4
. k=3
 also satisfies the given condition, but the smallest should be printed.

For the second test case, there is no k
 that satisfies a1⋅a2⋅…⋅ak=ak+1⋅ak+2⋅…⋅an

For the third test case, k=1
, 2
, and 3
 satisfy the given condition, so the answer is 1
.



*/