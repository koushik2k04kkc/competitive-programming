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
    fl(i,n)
    {
        cin >> a[i];
    }
    int count0 = 0, count1 = 0, count2 = 0, count3 = 0, count5 = 0;
    bool found = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            count0++;
        if (a[i] == 1)
            count1++;
        if (a[i] == 2)
            count2++;
        if (a[i] == 3)
            count3++;
        if (a[i] == 5)
            count5++;
        if (count0 >= 3 && count1 >= 1 && count2 >= 2 && count3 >= 1 && count5 >= 1)
        {
            cout << i + 1 nl;
            found = true;
            break;
        }
    }
    if (!found)
    {
        cout << 0 nl;
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
The final of the first Olympiad by IT Campus "NEIMARK" is scheduled for March 1, 2025. A nameless intern was tasked with forming the date of the Olympiad using digits — 01.03.2025.

To accomplish this, the intern took a large bag of digits and began drawing them one by one. In total, he drew n
 digits — the digit ai
 was drawn in the i
-th turn.

You suspect that the intern did extra work. Determine at which step the intern could have first assembled the digits to form the date of the Olympiad (the separating dots can be ignored), or report that it is impossible to form this date from the drawn digits. Note that leading zeros must be displayed.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤20
).

The second line of each test case contains n
 integers ai
 (0≤ai≤9
) — the numbers that the intern pulled out in chronological order.

Output
For each test case, output the minimum number of digits that the intern could pull out. If all the digits cannot be used to make a date, output the number 0
.

Example
InputCopy
4
10
2 0 1 2 3 2 5 0 0 1
8
2 0 1 2 3 2 5 0
8
2 0 1 0 3 2 5 0
16
2 3 1 2 3 0 1 9 2 1 0 3 5 4 0 3
OutputCopy
9
0
8
15


*/