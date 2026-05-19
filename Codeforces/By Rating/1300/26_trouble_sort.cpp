#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<ll> vi;
const ll MOD = (ll)1e9 + 7;
void solve()
{
    ll n;
    cin >> n;
    vi a(n), b(n);
    fl(i, n) cin >> a[i];
    fl(i, n) cin >> b[i];
    bool zero = 0, one = 0;
    fl(i, n)
    {
        if (b[i] == 0)
            zero = 1;
        else
            one = 1;
    }
    if (zero && one)
    {
        py;
    }
    else
    {
        bool sorted = 1;
        fl(i, n - 1)
        {
            if (a[i] > a[i + 1]){
                sorted = 0;
            break;
            }
        }
        if (sorted)
        {
            py;
        }
        else
            pn;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
Ashish has n elements arranged in a line.

These elements are represented by two integers ai — the value of the element and bi — the type of the element (there are only two possible types: 0 and 1). He wants to sort the elements in non-decreasing values of ai.

He can perform the following operation any number of times:

    Select any two elements i and j such that bi≠bj and swap them. That is, he can only swap two elements of different types in one move. 

Tell him if he can sort the elements in non-decreasing values of ai after performing any number of operations.
Input

The first line contains one integer t (1≤t≤100) — the number of test cases. The description of the test cases follows.

The first line of each test case contains one integer n (1≤n≤500) — the size of the arrays.

The second line contains n integers ai (1≤ai≤105)  — the value of the i-th element.

The third line containts n integers bi (bi∈{0,1})  — the type of the i-th element.
Output

For each test case, print "Yes" or "No" (without quotes) depending on whether it is possible to sort elements in non-decreasing order of their value.

You may print each letter in any case (upper or lower).
Example
Input
Copy

5
4
10 20 20 30
0 1 0 1
3
3 1 2
0 1 1
4
2 2 4 8
1 1 1 1
3
5 15 4
0 0 0
4
20 10 100 50
1 0 0 1

Output
Copy

Yes
Yes
Yes
No
Yes

Note

For the first case: The elements are already in sorted order.

For the second case: Ashish may first swap elements at positions 1 and 2, then swap elements at positions 2 and 3.

For the third case: The elements are already in sorted order.

For the fourth case: No swap operations may be performed as there is no pair of elements i and j such that bi≠bj. The elements cannot be sorted.

For the fifth case: Ashish may swap elements at positions 3 and 4, then elements at positions 1 and 2.
*/