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
    int n;
    cin >> n;
    int a[n], b[n];
    mii ma, mb;
    int ans = INT_MIN;
    int cnt = 1;
    fl(i,n)
    {
        cin >> a[i];
        if (i && a[i] == a[i - 1])
            cnt++;
        else
            cnt = 1;
        ma[a[i]] = max(ma[a[i]], cnt);
    }
    cnt = 1;
    fl(i,n)
    {
        cin >> b[i];
        if (i && b[i] == b[i - 1])
            cnt++;
        else
            cnt = 1;
        mb[b[i]] = max(mb[b[i]], cnt);
    }
    for (int i = 1; i <= 2 * n; i++)
    {
        ans = max(ans, ma[i] + mb[i]);
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
You are given two arrays a
 and b
 both of length n
.

You will merge†
 these arrays forming another array c
 of length 2⋅n
. You have to find the maximum length of a subarray consisting of equal values across all arrays c
 that could be obtained.

†
 A merge of two arrays results in an array c
 composed by successively taking the first element of either array (as long as that array is nonempty) and removing it. After this step, the element is appended to the back of c
. We repeat this operation as long as we can (i.e. at least one array is nonempty).

Input
Each test contains multiple test cases. The first line of input contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the length of the array a
 and b
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤2⋅n
) — the elements of array a
.

The third line of each test case contains n
 integers b1,b2,…,bn
 (1≤bi≤2⋅n
) — the elements of array b
.

It is guaranteed that the sum of n
 across all test cases does not exceed 2⋅105
.

Output
For each test case, output the maximum length of a subarray consisting of equal values across all merges.

Example
InputCopy
4
1
2
2
3
1 2 3
4 5 6
2
1 2
2 1
5
1 2 2 2 2
2 1 1 1 1
OutputCopy
2
1
2
5
Note
In the first test case, we can only make c=[2,2]
, thus the answer is 2
.

In the second test case, since all values are distinct, the answer must be 1
.

In the third test case, the arrays c
 we can make are [1,2,1,2]
, [1,2,2,1]
, [2,1,1,2]
, [2,1,2,1]
. We can see that the answer is 2
 when we choose c=[1,2,2,1]
.



*/