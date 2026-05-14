#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

typedef unsigned long long ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n;
    cin >> n;
    vi a(n), b(n);
    fl(i, n) cin >> a[i];
    fl(i, n) cin >> b[i];
    bool f = 1;
    fl(i,n)
    {
        if (a[i] == b[i]) continue;
        if (i < n - 1 && (a[i] ^ a[i + 1]) == b[i])  continue;
        if (i < n - 1 && (a[i] ^ b[i + 1]) == b[i]) continue;
        f = 0;break;
    }
  if(f){
      py;
  } else{
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
    while(t--){
        solve();
    }
    return 0;
}
/*
You're given an array a
 of length n
. For each index i
 such that 1≤i<n
, you can perform the following operation at most once:

Assign ai:=ai⊕ai+1
, where ⊕
 denotes the bitwise XOR operation. .
You can choose indices and perform the operations in any sequential order.

Given another array b
 of length n
, determine if it is possible to transform a
 to b
.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains one integer n
 (2≤n≤2⋅105
).

The second line of each test case contains n
 integers a1,a2,…,an
 (0≤ai<230
).

The third line of each test case contains n
 integers b1,b2,…,bn
 (0≤bi<230
).

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output "YES" (quotes excluded) if a
 can be transformed to b
; otherwise, output "NO". You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

Example
InputCopy
7
5
1 2 3 4 5
3 2 7 1 5
3
0 0 1
1 0 1
3
0 0 1
0 0 0
4
0 0 1 2
1 3 3 2
6
1 1 4 5 1 4
0 5 4 5 5 4
3
0 1 2
2 3 2
2
10 10
11 10
OutputCopy
YES
NO
NO
NO
YES
NO
NO
Note
In the first test case, you can perform the operations in the following order:

Choose index i=3
 and assign a3:=a3⊕a4=7
, and a
 becomes [1,2,7,4,5]
.
Choose index i=4
 and assign a4:=a4⊕a5=1
, and a
 becomes [1,2,7,1,5]
.
Choose index i=1
 and assign a1:=a1⊕a2=3
, and a
 becomes [3,2,7,1,5]
.


*/