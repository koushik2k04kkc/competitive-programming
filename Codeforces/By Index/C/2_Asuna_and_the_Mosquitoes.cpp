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
    vi a(n);
    ll sum = 0, cnt = 0;
    fl(i,n)
    {
        cin >> a[i];
        sum += a[i];
        cnt += (a[i]%2==1);
    }
    if (cnt==0 || cnt == n)
    {
        cout << *max_element(a.begin(), a.end()) nl;
    }
    else
    {
        cout << sum - cnt + 1 nl;
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
For her birthday, each of Asuna's n
 admirers gifted her a tower. The height of the tower from the i
-th admirer is equal to ai
.

Asuna evaluates the beauty of the received gifts as max(a1,a2,…,an)
. She can perform the following operation an arbitrary number of times (possibly, zero).

Take such 1≤i≠j≤n
 that ai+aj
 is odd and ai>0
, then decrease ai
 by 1
 and increase aj
 by 1
.
It is easy to see that the heights of the towers remain non-negative during the operations.
Help Asuna find the maximum possible beauty of the gifts after any number of operations!

Input
Each test consists of several test cases. The first line of the input data contains one integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the number of admirers of Asuna.

The second line of each test case contains n
 integers a1,a2,…,an (1≤ai≤109)
 — the heights of the towers.

It is guaranteed that the sum of n
 across all test cases does not exceed 2⋅105
.

Output
For each test case, output a single integer: the maximum value of the beauty of the gifts that Asuna can achieve.

Example
InputCopy
4
3
5 3 9
2
3 2
4
1 2 2 1
5
5 4 3 2 9
OutputCopy
9
5
5
21
Note
In the first test case, no pair of towers satisfies the required condition for applying the operation, so no operations can be performed. In this case, the answer is max(5, 3, 9)=9
.

In the second test case, the operation with i=2
 and j=1
 can be applied twice. After that, the array becomes: a = [5, 0]
. Thus, the answer is 5.

In the third test case, the following sequence of operations can be applied:

Operation with i=1
 and j=2
.
[1, 2, 2, 1]→[0, 3, 2, 1]

Operation with i=3
 and j=2
.
[0, 3, 2, 1]→[0, 4, 1, 1]

Operation with i=3
 and j=2
.
[0, 4, 1, 1]→[0, 5, 0, 1]

max(0, 5, 0, 1) = 5
.

Therefore, the answer is 5.



*/