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
#define eb(v) v.end(), v.begin()

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
    fl(i, n) cin >> a[i];
    int odd = 0, even = 0;
    for (int x : a)
    {
        if (x % 2 == 0)
            even++;
        else
            odd++;
    }
    if (odd % 2 == 0)
    {
        py;
        return;
    }
    sort(be(a));
    for (int i = 1; i < n; i++)
    {
        if (abs(a[i] - a[i - 1]) == 1)
        {
            py;
            return;
        }
    }
    pn;
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
We call two numbers x
 and y
 similar if they have the same parity (the same remainder when divided by 2
), or if |x−y|=1
. For example, in each of the pairs (2,6)
, (4,3)
, (11,7)
, the numbers are similar to each other, and in the pairs (1,4)
, (3,12)
, they are not.

You are given an array a
 of n
 (n
 is even) positive integers. Check if there is such a partition of the array into pairs that each element of the array belongs to exactly one pair and the numbers in each pair are similar to each other.

For example, for the array a=[11,14,16,12]
, there is a partition into pairs (11,12)
 and (14,16)
. The numbers in the first pair are similar because they differ by one, and in the second pair because they are both even.

Input
The first line contains a single integer t
 (1≤t≤1000
) — the number of test cases. Then t
 test cases follow.

Each test case consists of two lines.

The first line contains an even positive integer n
 (2≤n≤50
) — length of array a
.

The second line contains n
 positive integers a1,a2,…,an
 (1≤ai≤100
).

Output
For each test case print:

YES if the such a partition exists,
NO otherwise.
The letters in the words YES and NO can be displayed in any case.

Example
InputCopy
7
4
11 14 16 12
2
1 8
4
1 1 1 1
4
1 2 5 6
2
12 13
6
1 6 3 10 5 8
6
1 12 3 10 5 8
OutputCopy
YES
NO
YES
YES
YES
YES
NO
Note
The first test case was explained in the statement.

In the second test case, the two given numbers are not similar.

In the third test case, any partition is suitable.



*/