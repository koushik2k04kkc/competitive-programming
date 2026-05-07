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
    int n = 4;
    vi a(n);
    fl(i, n) cin >> a[i];
    sort(be(a));
    fl(i, 3)
    {
        cout << a[3] - a[i] << " ";
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
Polycarp has guessed three positive integers a
, b
 and c
. He keeps these numbers in secret, but he writes down four numbers on a board in arbitrary order — their pairwise sums (three numbers) and sum of all three numbers (one number). So, there are four numbers on a board in random order: a+b
, a+c
, b+c
 and a+b+c
.

You have to guess three numbers a
, b
 and c
 using given numbers. Print three guessed integers in any order.

Pay attention that some given numbers a
, b
 and c
 can be equal (it is also possible that a=b=c
).

Input
The only line of the input contains four positive integers x1,x2,x3,x4
 (2≤xi≤109
) — numbers written on a board in random order. It is guaranteed that the answer exists for the given number x1,x2,x3,x4
.

Output
Print such positive integers a
, b
 and c
 that four numbers written on a board are values a+b
, a+c
, b+c
 and a+b+c
 written in some order. Print a
, b
 and c
 in any order. If there are several answers, you can print any. It is guaranteed that the answer exists.

Examples
InputCopy
3 6 5 4
OutputCopy
2 1 3
InputCopy
40 40 40 60
OutputCopy
20 20 20
InputCopy
201 101 101 200
OutputCopy
1 100 100


*/