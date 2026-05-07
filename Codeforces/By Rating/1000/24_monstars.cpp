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
    ll k;
    cin >> n >> k;
    vector<pair<ll, int>> m(n);
    fl(i,n)
    {
        ll a;
        cin >> a;
        m[i] = {(a - 1) % k, i + 1};
    }
    sort(m.begin(), m.end(), [](auto &x, auto &y)
         { return x.first == y.first ? x.second < y.second : x.first > y.first; });
    for (auto &p : m)
        cout << p.second << " ";
    cout nl;
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
Monocarp is playing yet another computer game. And yet again, his character is killing some monsters. There are n
 monsters, numbered from 1
 to n
, and the i
-th of them has ai
 health points initially.

Monocarp's character has an ability that deals k
 damage to the monster with the highest current health. If there are several of them, the one with the smaller index is chosen. If a monster's health becomes less than or equal to 0
 after Monocarp uses his ability, then it dies.

Monocarp uses his ability until all monsters die. Your task is to determine the order in which monsters will die.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two integers n
 and k
 (1≤n≤3⋅105
; 1≤k≤109
) — the number of monsters and the damage which Monocarp's ability deals.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the initial health points of monsters.

The sum of n
 over all test cases doesn't exceed 3⋅105
.

Output
For each test case, print n
 integers — the indices of monsters in the order they die.

Example
InputCopy
3
3 2
1 2 3
2 3
1 1
4 3
2 8 3 5
OutputCopy
2 1 3
1 2
3 1 2 4
Note
In the first example, the health points change as follows: [1,2,3–]→[1,2–,1]→[1–,0,1]→[−1,0,1–]→[−1,0,−1]
. The monster that is going to take damage the next time Monocarp uses his ability is underlined.

In the second example, the health points change as follows: [1–,1]→[−2,1–]→[−2,−2]
.

In the third example, the health points change as follows: [2,8–,3,5]→[2,5–,3,5]→[2,2,3,5–]→[2,2,3–,2]→[2–,2,0,2]→[−1,2–,0,2]→[−1,−1,0,2–]→[−1,−1,0,−1]
.



*/