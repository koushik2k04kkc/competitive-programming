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
typedef map<ll, ll> mll;
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
    if (n % 2 == 0)
    {
        cout << -1 nl;
        return;
    }
    for (int i = 1; i <= n; i += 2)
        cout << i << ' ';
    for (int i = 2; i <= n; i += 2)
        cout << i << ' ';
    cout nl;
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
At the IT Campus "NEIMARK", there are several top-secret rooms where problems for major programming competitions are developed. To enter one of these rooms, you must unlock a circular lock by selecting the correct code. This code is updated every day.

Today's code is a permutation∗
 of the numbers from 1
 to n
, with the property that in every cyclic shift†
 of it, there is exactly one fixed point. That is, in every cyclic shift, there exists exactly one element whose value is equal to its position in the permutation.

Output any valid permutation that satisfies this condition. Keep in mind that a valid permutation might not exist, then output −1
.

∗
A permutation is defined as a sequence of length n
 consisting of integers from 1
 to n
, where each number appears exactly once. For example, (2 1 3), (1), (4 3 1 2) are permutations; (1 2 2), (3), (1 3 2 5) are not.

†
A cyclic shift of an array is obtained by moving the last element to the beginning of the array. A permutation of length n
 has exactly n
 cyclic shifts.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤500
). The description of the test cases follows.

A single line of each test case contains a single integer n
 (1≤n≤2⋅105
).

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the desired permutation. If multiple solutions exist, output any one of them. If no suitable permutations exist, output −1
.

Example
InputCopy
3
4
5
3
OutputCopy
-1
4 1 3 5 2
1 3 2
Note
In the second example, there is a permutation such that in each cyclic shift there is a fixed point (highlighted in dark red):


The first line contains the element numbers, and the second line contains all the shifts of the desired permutation.



*/