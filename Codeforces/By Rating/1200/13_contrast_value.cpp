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

void solve(){
    int n;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int ans = 1;
    int last = a[1], last_comp = -1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == last)
            continue;
        if (last < a[i])
        {
            if (last_comp != 1)
            {
                ++ans;
            }
        }
        else
        {
            if (last_comp != 0)
            {
                ++ans;
            }
        }
        last_comp = last < a[i];
        last = a[i];
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
For an array of integers [a1,a2,…,an]
, let's call the value |a1−a2|+|a2−a3|+⋯+|an−1−an|
 the contrast of the array. Note that the contrast of an array of size 1
 is equal to 0
.

You are given an array of integers a
. Your task is to build an array of b
 in such a way that all the following conditions are met:

b
 is not empty, i.e there is at least one element;
b
 is a subsequence of a
, i.e b
 can be produced by deleting some elements from a
 (maybe zero);
the contrast of b
 is equal to the contrast of a
.
What is the minimum possible size of the array b
?

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤3⋅105
) — the size of the array a
.

The second line contains n
 integers a1,a2,⋅,an
 (0≤ai≤109
) — elements of the array itself.

The sum of n
 over all test cases doesn't exceed 3⋅105
.

Output
For each test case, print a single integer — the minimum possible size of the array b
.

Example
InputCopy
4
5
1 3 3 3 7
2
4 2
4
1 1 1 1
7
5 4 2 1 0 0 4
OutputCopy
2
2
1
3


*/