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
    int n;
    cin >> n;
    vi a(n), cnt(n + 1, 0);
    fl(i,n)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    vector<bool> p(n + 2, 0);
    p[0] = 1;
    int i = 1;
    while (i <= n)
    {
        if (p[i - 1] && cnt[i - 1] > 0)
        {
            p[i] = 1;
            i++;
        }
        else
        {
            break;
        }
    }
    vi diff(n + 4, 0);
    for (int i = 0; i <= n; i++)
    {
        int l = cnt[i], r = n - i;
        if (l <= r && p[i])
        {
            diff[l]++, diff[r + 1]--;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        diff[i] += diff[i - 1];
    }
    for (int i = 0; i <= n; i++)
    {
        cout << diff[i] << ' ';
    }
    cout nl;
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
Define the MEX
 (minimum excluded value) of an array to be the smallest nonnegative integer not present in the array. For example,

MEX([2,2,1])=0
 because 0
 is not in the array.
MEX([3,1,0,1])=2
 because 0
 and 1
 are in the array but 2
 is not.
MEX([0,3,1,2])=4
 because 0
, 1
, 2
, and 3
 are in the array but 4
 is not.
You are given an array a
 of size n
 of nonnegative integers.

For all k
 (0≤k≤n
), count the number of possible values of MEX(a)
 after removing exactly k
 values from a
.

Input
The first line contains an integer t
 (1≤t≤104
)  — the number of test cases.

The first line of each test case contains one integer n
 (1≤n≤2⋅105
) — the size of the array a
.

The second line of each test case contains n
 integers, a1,a2,…,an
 (0≤ai≤n
).

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output a single line containing n+1
 integers — the number of possible values of MEX(a)
 after removing exactly k
 values, for k=0,1,…,n
.

Example
InputCopy
5
5
1 0 0 1 2
6
3 2 0 4 5 1
6
1 2 0 1 3 2
4
0 3 4 1
5
0 0 0 0 0
OutputCopy
1 2 4 3 2 1
1 6 5 4 3 2 1
1 3 5 4 3 2 1
1 3 3 2 1
1 1 1 1 1 1
Note
In the first sample, consider k=1
. If you remove a 0
, then you get the following array:

1	0	1	2
So we get MEX(a)=3
. Alternatively, if you remove the 2
, then you get the following array:
1	0	0	1
So we get MEX(a)=2
. It can be shown that these are the only possible values of MEX(a)
 after removing exactly one value. So the output for k=1
 is 2
.
*/