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
    int n, k;
    cin >> n >> k;
    vi a(n);
    fl(i,n){
        cin >> a[i];
    }
    sort(vr(a));
    int cnt = 1, ans = 1;
    for (int i = 1; i < n; ++i)
    {
        if (a[i] - a[i - 1] > k)
        {
            cnt = 1;
        }
        else
        {
            ++cnt;
        }
        ans = max(ans, cnt);
    }
    cout << n - ans nl;
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
You are the author of a Codeforces round and have prepared n
 problems you are going to set, problem i
 having difficulty ai
. You will do the following process:

remove some (possibly zero) problems from the list;
rearrange the remaining problems in any order you wish.
A round is considered balanced if and only if the absolute difference between the difficulty of any two consecutive problems is at most k
 (less or equal than k
).

What is the minimum number of problems you have to remove so that an arrangement of problems is balanced?

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases.

The first line of each test case contains two positive integers n
 (1≤n≤2⋅105
) and k
 (1≤k≤109
) — the number of problems, and the maximum allowed absolute difference between consecutive problems.

The second line of each test case contains n
 space-separated integers ai
 (1≤ai≤109
) — the difficulty of each problem.

Note that the sum of n
 over all test cases doesn't exceed 2⋅105
.

Output
For each test case, output a single integer — the minimum number of problems you have to remove so that an arrangement of problems is balanced.

Example
InputCopy
7
5 1
1 2 4 5 6
1 2
10
8 3
17 3 1 20 12 5 17 12
4 2
2 4 6 8
5 3
2 3 19 10 8
3 4
1 10 5
8 1
8 3 1 4 5 10 7 3
OutputCopy
2
0
5
0
3
1
4
Note
For the first test case, we can remove the first 2
 problems and construct a set using problems with the difficulties [4,5,6]
, with difficulties between adjacent problems equal to |5−4|=1≤1
 and |6−5|=1≤1
.

For the second test case, we can take the single problem and compose a round using the problem with difficulty 10
.



*/