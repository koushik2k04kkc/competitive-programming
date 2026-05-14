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
    int n, k, x;
    cin >> n >> k >> x;
    if (x != 1)
    {
        cout << "YES" nl;
        cout << n nl;
        fl(i,n)
        {
            cout << 1 << " ";
        }
        cout nl;
        return;
    }
    else if (k == 1 || (k == 2 && (n % 2 == 1)))
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES" nl;
        cout << n / 2 nl;
        if (n % 2 == 1)
        {
            for (int i = 0; i < (n / 2) - 1; i++)
            {
                cout << 2 << " ";
            }
            cout << 3 nl;
        }
        else
        {
            for (int i = 0; i < n / 2; i++)
            {
                cout << 2 << " ";
            }
            cout nl;
        }
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
You are given an integer n
, which you want to obtain. You have an unlimited supply of every integer from 1
 to k
, except integer x
 (there are no integer x
 at all).

You are allowed to take an arbitrary amount of each of these integers (possibly, zero). Can you make the sum of taken integers equal to n
?

If there are multiple answers, print any of them.

Input
The first line contains a single integer t
 (1≤t≤100
) — the number of testcases.

The only line of each testcase contains three integers n,k
 and x
 (1≤x≤k≤n≤100
).

Output
For each test case, in the first line, print "YES" or "NO" — whether you can take an arbitrary amount of each integer from 1
 to k
, except integer x
, so that their sum is equal to n
.

If you can, the second line should contain a single integer m
 — the total amount of taken integers. The third line should contain m
 integers — each of them from 1
 to k
, not equal to x
, and their sum is n
.

If there are multiple answers, print any of them.

Example
InputCopy
5
10 3 2
5 2 1
4 2 1
7 7 3
6 1 1
OutputCopy
YES
6
3 1 1 1 1 3
NO
YES
2
2 2
YES
1
7
NO
Note
Another possible answer for the first testcase is [3,3,3,1]
. Note that you don't have to minimize the amount of taken integers. There also exist other answers.

In the second testcase, you only have an unlimited supply of integer 2
. There is no way to get sum 5
 using only them.

In the fifth testcase, there are no integers available at all, so you can't get any positive sum.



*/