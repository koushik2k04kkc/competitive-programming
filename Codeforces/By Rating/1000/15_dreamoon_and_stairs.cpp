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
    int n, m, steps;
    cin >> n >> m;
    if (n < m)
        steps = -1;
    else
    {
        steps = ceil((double)n / 2);
        while (1)
        {
            if (steps % m == 0)
                break;
            ++steps;
        }
    }
    cout << steps nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    //ll t;
  //  cin >> t;
    //while(t--){
        solve();
   // }
    return 0;
}
/*
Dreamoon wants to climb up a stair of n steps. He can climb 1 or 2 steps at each move. Dreamoon wants the number of moves to be a multiple of an integer m.

What is the minimal number of moves making him climb to the top of the stairs that satisfies his condition?

Input
The single line contains two space separated integers n, m (0 < n ≤ 10000, 1 < m ≤ 10).

Output
Print a single integer — the minimal number of moves being a multiple of m. If there is no way he can climb satisfying condition print  - 1 instead.

Examples
InputCopy
10 2
OutputCopy
6
InputCopy
3 5
OutputCopy
-1
Note
For the first sample, Dreamoon could climb in 6 moves with following sequence of steps: {2, 2, 2, 2, 1, 1}.

For the second sample, there are only three valid sequence of steps {2, 1}, {1, 2}, {1, 1, 1} with 2, 2, and 3 steps respectively. All these numbers are not multiples of 5.
*/