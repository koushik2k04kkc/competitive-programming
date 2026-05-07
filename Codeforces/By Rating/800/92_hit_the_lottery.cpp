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
    int ans = 0;
    int bill[] = {100, 20, 10, 5, 1};
    fl(i,5){
        ans += n / bill[i];
        n %= bill[i];
    }
    cout << ans nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    solve();
    return 0;
}
/*
Allen has a LOT of money. He has n
 dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1
, 5
, 10
, 20
, 100
. What is the minimum number of bills Allen could receive after withdrawing his entire balance?

Input
The first and only line of input contains a single integer n
 (1≤n≤109
).

Output
Output the minimum number of bills that Allen could receive.

Examples
InputCopy
125
OutputCopy
3
InputCopy
43
OutputCopy
5
InputCopy
1000000000
OutputCopy
10000000
Note
In the first sample case, Allen can withdraw this with a 100
 dollar bill, a 20
 dollar bill, and a 5
 dollar bill. There is no way for Allen to receive 125
 dollars in one or two bills.

In the second sample case, Allen can withdraw two 20
 dollar bills and three 1
 dollar bills.

In the third sample case, Allen can withdraw 100000000
 (ten million!) 100
 dollar bills.



*/