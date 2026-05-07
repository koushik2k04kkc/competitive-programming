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
#define eb(v) v.rbegin(), v.rend()

typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n;
    cin >> n;
    int pos[1001];
    for (int i = 0; i <= 1000; i++)
    {
        pos[i] = -1;
    }
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        pos[x] = i;
    }
    int ans = -1;
    for (int i = 1; i <= 1000; i++)
    {
        if (pos[i] == -1)
            continue;
        for (int j = 1; j <= 1000; j++)
        {
            if (pos[j] == -1)
                continue;

            if (__gcd(i, j) == 1)
            {
                ans = max(ans, pos[i] + pos[j]);
            }
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
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
Given an array of n
 positive integers a1,a2,…,an
 (1≤ai≤1000
). Find the maximum value of i+j
 such that ai
 and aj
 are coprime,†
 or −1
 if no such i
, j
 exist.

For example consider the array [1,3,5,2,4,7,7]
. The maximum value of i+j
 that can be obtained is 5+7
, since a5=4
 and a7=7
 are coprime.

†
 Two integers p
 and q
 are coprime if the only positive integer that is a divisor of both of them is 1
 (that is, their greatest common divisor is 1
).

Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤10
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n
 (2≤n≤2⋅105
) — the length of the array.

The following line contains n
 space-separated positive integers a1
, a2
,..., an
 (1≤ai≤1000
) — the elements of the array.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output a single integer  — the maximum value of i+j
 such that i
 and j
 satisfy the condition that ai
 and aj
 are coprime, or output −1
 in case no i
, j
 satisfy the condition.

Example
InputCopy
6
3
3 2 1
7
1 3 5 2 4 7 7
5
1 2 3 4 5
3
2 2 4
6
5 4 3 15 12 16
5
1 2 2 3 6
OutputCopy
6
12
9
-1
10
7
Note
For the first test case, we can choose i=j=3
, with sum of indices equal to 6
, since 1
 and 1
 are coprime.

For the second test case, we can choose i=7
 and j=5
, with sum of indices equal to 7+5=12
, since 7
 and 4
 are coprime.
*/