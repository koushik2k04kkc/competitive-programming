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
    int n, m, k;
    cin >> n >> m >> k;
    int x[m + 1];
    for (int i = 0; i <= m; ++i)
    {
        cin >> x[i];
    }
    int fedor = x[m];
    int fnd = 0;
    for (int i = 0; i < m; ++i)
    {
        int diff = x[i] ^ fedor;
        int cnt = 0;
        while (diff)
        {
            if (diff & 1)
                cnt++;
            diff >>= 1;
        }
        if (cnt <= k)
        {
            fnd++;
        }
    }
    cout << fnd << endl;
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
After you had helped George and Alex to move in the dorm, they went to help their friend Fedor play a new computer game «Call of Soldiers 3».

The game has (m + 1) players and n types of soldiers in total. Players «Call of Soldiers 3» are numbered form 1 to (m + 1). Types of soldiers are numbered from 0 to n - 1. Each player has an army. Army of the i-th player can be described by non-negative integer xi. Consider binary representation of xi: if the j-th bit of number xi equal to one, then the army of the i-th player has soldiers of the j-th type.

Fedor is the (m + 1)-th player of the game. He assume that two players can become friends if their armies differ in at most k types of soldiers (in other words, binary representations of the corresponding numbers differ in at most k bits). Help Fedor and count how many players can become his friends.

Input
The first line contains three integers n, m, k (1 ≤ k ≤ n ≤ 20; 1 ≤ m ≤ 1000).

The i-th of the next (m + 1) lines contains a single integer xi (1 ≤ xi ≤ 2n - 1), that describes the i-th player's army. We remind you that Fedor is the (m + 1)-th player.

Output
Print a single integer — the number of Fedor's potential friends.

Examples
InputCopy
7 3 1
8
5
111
17
OutputCopy
0
InputCopy
3 3 3
1
2
3
4
OutputCopy
3

*/