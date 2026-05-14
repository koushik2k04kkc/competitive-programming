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
    vi a(n);
    fl(i,n){
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = n - 2; i >= 0;i--){
        while(a[i]>=a[i+1] && a[i]>0){
            a[i] /= 2;
            cnt++;
        }
        if(a[i]==a[i+1]){
            cout << -1 nl;
            return;
        }
    }
    cout << cnt nl;
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
Given n
 integers a1,a2,…,an
. You can perform the following operation on them:

select any element ai
 (1≤i≤n
) and divide it by 2
 (round down). In other words, you can replace any selected element ai
 with the value ⌊ai2⌋
 (where ⌊x⌋
 is – round down the real number x
).
Output the minimum number of operations that must be done for a sequence of integers to become strictly increasing (that is, for the condition a1<a2<⋯<an
 to be satisfied). Or determine that it is impossible to obtain such a sequence. Note that elements cannot be swapped. The only possible operation is described above.

For example, let n=3
 and a sequence of numbers [3,6,5]
 be given. Then it is enough to perform two operations on it:

Write the number ⌊62⌋=3
 instead of the number a2=6
 and get the sequence [3,3,5]
;
Then replace a1=3
 with ⌊32⌋=1
 and get the sequence [1,3,5]
.
The resulting sequence is strictly increasing because 1<3<5
.

Input
The first line of the input contains an integer t
 (1≤t≤104
) — the number of test cases in the input.

The descriptions of the test cases follow.

The first line of each test case contains a single integer n
 (1≤n≤30
).

The second line of each test case contains exactly n
 integers a1,a2,…,an
 (0≤ai≤2⋅109
).

Output
For each test case, print a single number on a separate line — the minimum number of operations to perform on the sequence to make it strictly increasing. If a strictly increasing sequence cannot be obtained, print "-1".

Example
InputCopy
7
3
3 6 5
4
5 3 2 1
5
1 2 3 4 5
1
1000000000
4
2 8 7 5
5
8 26 5 21 10
2
5 14
OutputCopy
2
-1
0
0
4
11
0
Note
The first test case is analyzed in the statement.

In the second test case, it is impossible to obtain a strictly increasing sequence.

In the third test case, the sequence is already strictly increasing.



*/