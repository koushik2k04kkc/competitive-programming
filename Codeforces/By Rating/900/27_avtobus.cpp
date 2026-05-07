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
    ll n;
    cin >> n;
    if (n % 2 == 1 || n < 4)
    {
        cout << "-1" nl;
        return;
    }
    cout << (n + 5) / 6 << " " << n / 4 nl;
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
Spring has come, and the management of the AvtoBus bus fleet has given the order to replace winter tires with summer tires on all buses.

You own a small bus service business and you have just received an order to replace n
 tires. You know that the bus fleet owns two types of buses: with two axles (these buses have 4
 wheels) and with three axles (these buses have 6
 wheels).

You don't know how many buses of which type the AvtoBus bus fleet owns, so you wonder how many buses the fleet might have. You have to determine the minimum and the maximum number of buses that can be in the fleet if you know that the total number of wheels for all buses is n
.

Input
The first line contains an integer t
 (1≤t≤1000
) — the number of test cases. The following lines contain description of test cases.

The only line of each test case contains one integer n
 (1≤n≤1018
) — the total number of wheels for all buses.

Output
For each test case print the answer in a single line using the following format.

Print two integers x
 and y
 (1≤x≤y
) — the minimum and the maximum possible number of buses that can be in the bus fleet.

If there is no suitable number of buses for the given n
, print the number −1
 as the answer.

Example
InputCopy
4
4
7
24
998244353998244352
OutputCopy
1 1
-1
4 6
166374058999707392 249561088499561088
Note
In the first test case the total number of wheels is 4
. It means that there is the only one bus with two axles in the bus fleet.

In the second test case it's easy to show that there is no suitable number of buses with 7
 wheels in total.

In the third test case the total number of wheels is 24
. The following options are possible:

Four buses with three axles.
Three buses with two axles and two buses with three axles.
Six buses with two axles.
So the minimum number of buses is 4
 and the maximum number of buses is 6
.



*/