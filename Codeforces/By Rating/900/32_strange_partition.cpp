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
    int n, x;
    cin >> n >> x;
    ll max = 0, sum = 0;
    fl(i,n)
    {
        int a;
        cin >> a;
        sum += a;
        max += (a + x - 1) / x;
    }
    cout << (sum + x - 1) / x << " " << max nl;
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
You are given an array a
 of length n
, and an integer x
. You can perform the following operation as many times as you would like (possibly zero): replace two adjacent elements of the array by their sum. For example, if the initial array was [3,6,9]
, in a single operation one can replace the last two elements by their sum, yielding an array [3,15]
, or replace the first two elements to get an array [9,9]
. Note that the size of the array decreases after each operation.

The beauty of an array b=[b1,…,bk]
 is defined as ∑ki=1⌈bix⌉
, which means that we divide each element by x
, round it up to the nearest integer, and sum up the resulting values. For example, if x=3
, and the array is [4,11,6]
, the beauty of the array is equal to ⌈43⌉+⌈113⌉+⌈63⌉=2+4+2=8
.

Please determine the minimum and the maximum beauty you can get by performing some operations on the original array.

Input
The first input line contains a single integer t
 — the number of test cases (1≤t≤1000
).

The first line of each test case contains two integers n
 and x
 (1≤n≤105
, 1≤x≤109
).

The next line contains n
 integers a1,a2,…,an
 (1≤ai≤109
), the elements of the array a
.

It is guaranteed that the sum of values of n
 over all test cases does not exceed 105
.

Output
For each test case output two integers — the minimal and the maximal possible beauty.

Example
InputCopy
2
3 3
3 6 9
3 3
6 4 11
OutputCopy
6 6
7 8
Note
In the first test case the beauty of the array does not change if we perform any operations.

In the second example we can leave the array unchanged to attain the maximum beauty, and to get the minimum beauty one can replace two elements 4
 and 11
 with their sum, yielding an array [6,15]
, which has its beauty equal to 7
.



*/