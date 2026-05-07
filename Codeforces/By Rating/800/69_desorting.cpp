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
    int op = INT_MAX;
    bool srt = true;
    fl(i,n)
    {
        cin >> a[i];
        if (i)
        {
            int dis = a[i] - a[i - 1];
            op = min(op, dis);
            if (a[i] < a[i - 1])
            {
                srt = false;
            }
        }
    }
    if (!srt)
    {
        cout << 0 nl;
    }
    else
    {
        cout << op / 2 + 1 nl;
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
Call an array a
 of length n
 sorted if a1≤a2≤…≤an−1≤an
.

Ntarsis has an array a
 of length n
.

He is allowed to perform one type of operation on it (zero or more times):

Choose an index i
 (1≤i≤n−1
).
Add 1
 to a1,a2,…,ai
.
Subtract 1
 from ai+1,ai+2,…,an
.
The values of a
 can be negative after an operation.

Determine the minimum operations needed to make a
 not sorted.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤100
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (2≤n≤500
) — the length of the array a
.

The next line contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the values of array a
.

It is guaranteed that the sum of n
 across all test cases does not exceed 500
.

Output
Output the minimum number of operations needed to make the array not sorted.

Example
InputCopy
4
2
1 1
4
1 8 10 13
3
1 3 2
3
1 9 14
OutputCopy
1
2
0
3
Note
In the first case, we can perform 1
 operation to make the array not sorted:

Pick i=1
. The array a
 then becomes [2,0]
, which is not sorted.
In the second case, we can perform 2
 operations to make the array not sorted:

Pick i=3
. The array a
 then becomes [2,9,11,12]
.
Pick i=3
. The array a
 then becomes [3,10,12,11]
, which is not sorted.
It can be proven that 1
 and 2
 operations are the minimal numbers of operations in the first and second test cases, respectively.

In the third case, the array is already not sorted, so we perform 0
 operations.



*/