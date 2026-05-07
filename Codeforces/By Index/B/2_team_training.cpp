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
    int n, x;
    cin >> n >> x;
    vi a(n);
    fl(i,n)
    {
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    int size = 0, count = 0;
    for (int val : a)
    {
        size++;
        if (size * val >= x)
        {
            count++;
            size = 0;
        }
    }
    cout << count nl;
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
At the IT Campus "NEIMARK", there are training sessions in competitive programming — both individual and team-based!

For the next team training session, n
 students will attend, and the skill of the i
-th student is given by a positive integer ai
.

The coach considers a team strong if its strength is at least x
. The strength of a team is calculated as the number of team members multiplied by the minimum skill among the team members.

For example, if a team consists of 4
 members with skills [5,3,6,8]
, then the team's strength is 4⋅min([5,3,6,8])=12
.

Output the maximum possible number of strong teams, given that each team must have at least one participant and every participant must belong to exactly one team.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤104
). The description of the test cases follows.

The first line of each test case contains two integers n
 and x
 (1≤n≤2⋅105
, 1≤x≤109
) — the number of students in training and the minimum strength of a team to be considered strong.

The second line of each test case contains n
 integers ai
 (1≤ai≤109
) — the skill of each student.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output the maximum possible number of teams with strength at least x
.

Example
InputCopy
5
6 4
4 5 3 3 2 6
4 10
4 2 1 3
5 3
5 3 2 3 2
3 6
9 1 7
6 10
6 1 3 6 3 2
OutputCopy
4
0
4
2
1


*/