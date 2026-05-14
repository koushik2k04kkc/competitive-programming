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
    int last = -1, ans = 0;
    fl(i,n)
    {
        int a;
        cin >> a;
        if (a - last > 1)
        {
            ans++;
            last = a;
        }
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
Given an array a
 and n
 integers. It is sorted in non-decreasing order, that is, ai≤ai+1
 for all 1≤i<n
.

You can remove any number of elements from the array (including the option of not removing any at all) without changing the order of the remaining elements. After the removals, the following will occur:

a1
 is written to a new array;
if a1+1<a2
, then a2
 is written to a new array; otherwise, a2
 is written to the same array as a1
;
if a2+1<a3
, then a3
 is written to a new array; otherwise, a3
 is written to the same array as a2
;
⋯
For example, if a=[1,2,4,6]
, then:

a1=1
 is written to the new array, resulting in arrays: [1]
;
a1+1=2
, so a2=2
 is added to the existing array, resulting in arrays: [1,2]
;
a2+1=3
, so a3=4
 is written to a new array, resulting in arrays: [1,2]
 and [4]
;
a3+1=5
, so a4=6
 is written to a new array, resulting in arrays: [1,2]
, [4]
, and [6]
.
Your task is to remove elements in such a way that the described algorithm creates as many arrays as possible. If you remove all elements from the array, no new arrays will be created.

Input
The first line of input contains one integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains one integer n
 (1≤n≤2⋅105
) — the length of the array.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤106
, ai≤ai+1
) — the elements of the array.

It is guaranteed that the sum of n
 across all test cases does not exceed 2⋅105
.

Output
For each test case, output one integer — the maximum number of arrays that can be obtained by removing any (possibly zero) number of elements.

Example
InputCopy
6
6
1 2 3 4 5 6
3
1 2 3
4
1 2 2 4
1
2
3
1 4 8
2
1 1
OutputCopy
3
2
2
1
3
1
Note
In the first example, you can remove a3
 and a5
, then a=[1,2,4,6]
, the process of forming arrays for it is shown in the statement.

In the second example, you need to remove a2
, after which a=[1,3]
, and the arrays [1]
 and [3]
 will be written.

In the third example, no removals are needed; for a=[1,2,2,4]
, the arrays [1,2,2]
 and [4]
 will be written.
*/