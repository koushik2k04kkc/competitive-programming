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
    ll n, d;
    cin >> n >> d;
    vi a(n);
    fl(i,n){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int strt = 0, end = n - 1, cnt = 0;
    while (strt <= end)
    {
        int mx = a[end];
        int req = (d / mx);
        if (req + strt <= end)
        {
            cnt++;
            strt += req;
            end--;
        }
        else
        {
            break;
        }
    }
    cout << cnt;
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
A basketball competition is held where the number of players in a team does not have a maximum or minimum limit (not necessarily 5
 players in one team for each match). There are N
 candidate players in the competition that will be trained by Pak Chanek, the best basketball coach on earth. The i
-th candidate player has a power of Pi
.

Pak Chanek will form zero or more teams from the N
 candidate players on the condition that each candidate player may only join in at most one team. Each of Pak Chanek's teams will be sent to compete once with an enemy team that has a power of D
. In each match, the team sent is said to defeat the enemy team if the sum of powers from the formed players is strictly greater than D
.

One of Pak Chanek's skills is that when a team that has been formed plays in a match, he can change the power of each player in the team to be equal to the biggest player power from the team.

Determine the maximum number of wins that can be achieved by Pak Chanek.

Input
The first line contains two integers N
 and D
 (1≤N≤105
, 1≤D≤109
) — the number of candidate players and the power of the enemy team.

The second line contains N
 integers P1,P2,…,PN
 (1≤Pi≤109
) — the powers of all candidate players.

Output
A line containing an integer representing the maximum number of wins that can be achieved by Pak Chanek.

Example
InputCopy
6 180
90 80 70 60 50 100
OutputCopy
2
Note
The 1
-st team formed is a team containing players 4
 and 6
. The power of each player in the team becomes 100
. So the total power of the team is 100+100=200>180
.

The 2
-nd team formed is a team containing players 1
, 2
, and 5
. The power of each player in the team becomes 90
. So the total power of the team is 90+90+90=270>180
.



*/