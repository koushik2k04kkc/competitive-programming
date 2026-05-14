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
    int t, n, k, t4;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[n];
        fl(i,n)
        {
            cin >> a[i];
            a[i] %= k;
        }
        sort(a, a + n);
        t4 = 0;
        if (k == 4)
        {
            fl(i,n)
            {
                if (a[i] == 2)
                {
                    t4++;
                }
                if (t4 == 2)
                {
                    break;
                }
            }
        }
        if (a[0] == 0 || t4 == 2)
        {
            cout << "0" nl;
        }
        else if (k == 2)
        {
            cout << "1" nl;
        }
        else if (k == 3 || k == 5)
        {
            cout << k - a[n - 1] nl;
        }
        else
        {
            if (a[n - 1] > 1)
            {
                cout << "1" nl;
            }
            else
            {
                cout << "2" nl;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
/*
You are given an array of integers a1,a2,…,an
 and a number k
 (2≤k≤5
). In one operation, you can do the following:

Choose an index 1≤i≤n
,
Set ai=ai+1
.
Find the minimum number of operations needed to make the product of all the numbers in the array a1⋅a2⋅…⋅an
 divisible by k
.

Input
Each test consists of multiple test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. Then follows the description of the test cases.

The first line of each test case contains two integers n
 and k
 (2≤n≤105
, 2≤k≤5
) — the size of the array a
 and the number k
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤10
).

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the minimum number of operations needed to make the product of all the numbers in the array divisible by k
.

Example
InputCopy
15
2 5
7 3
3 3
7 4 1
5 2
9 7 7 3 9
5 5
5 4 1 2 3
7 4
9 5 1 5 9 5 1
3 4
6 3 6
3 4
6 1 5
3 4
1 5 9
4 4
1 4 1 1
3 4
3 5 3
4 5
8 9 9 3
2 5
1 6
2 5
10 10
4 5
1 6 1 1
2 5
7 7
OutputCopy
2
2
1
0
2
0
1
2
0
1
1
4
0
4
3
Note
In the first test case, we need to choose the index i=2
 twice. After that, the array will be a=[7,5]
. The product of all the numbers in the array is 35
.

In the fourth test case, the product of the numbers in the array is 120
, which is already divisible by 5
, so no operations are needed.

In the eighth test case, we can perform two operations by choosing i=2
 and i=3
 in any order. After that, the array will be a=[1,6,10]
. The product of the numbers in the array is 60
.
*/