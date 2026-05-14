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
    int n;
    cin >> n;
    vi a(n);
    ll total = 0;
    int neg = 0;
    ll mn = LLONG_MAX;
    fl(i,n)
    {
        cin >> a[i];
        if (a[i] < 0)
            neg++;
        total += abs(a[i]);
        mn = min(mn, abs(a[i]));
    }
    if (neg % 2 == 0)
    {
        cout << total nl;
    }
    else
    {
        cout << total - 2 * mn nl;
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
Given an array a
 consisting of n
 elements, find the maximum possible sum the array can have after performing the following operation any number of times:

Choose 2
 adjacent elements and flip both of their signs. In other words choose an index i
 such that 1≤i≤n−1
 and assign ai=−ai
 and ai+1=−ai+1
.
Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤1000
) — the number of test cases. The descriptions of the test cases follow.

The first line of each test case contains an integer n
 (2≤n≤2⋅105
) — the length of the array.

The following line contains n
 space-separated integers a1,a2,…,an
 (−109≤ai≤109
).

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the maximum possible sum the array can have after performing the described operation any number of times.

Example
InputCopy
5
3
-1 -1 -1
5
1 5 -5 0 2
3
1 2 3
6
-1 10 9 8 7 6
2
-1 -1
OutputCopy
1
13
6
39
2
Note
For the first test case, by performing the operation on the first two elements, we can change the array from [−1,−1,−1]
 to [1,1,−1]
, and it can be proven this array obtains the maximum possible sum which is 1+1+(−1)=1
.

For the second test case, by performing the operation on −5
 and 0
, we change the array from [1,5,−5,0,2]
 to [1,5,−(−5),−0,2]=[1,5,5,0,2]
, which has the maximum sum since all elements are non-negative. So, the answer is 1+5+5+0+2=13
.

For the third test case, the array already contains only positive numbers, so performing operations is unnecessary. The answer is just the sum of the whole array, which is 1+2+3=6
.



*/