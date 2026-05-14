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
    int n, k, p;
    cin >> n >> k >> p;
    if (abs(k) > n * p)
    {
        cout << "-1\n";
        return;
    }
    int operations = (abs(k) + p - 1) / p;
    cout << operations nl;
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
Natsume Akito has just woken up in a new world and immediately received his first quest! The system provided him with an array a
 of n
 zeros, an integer k
, and an integer p
.

In one operation, Akito chooses two integers i
 and x
 such that 1≤i≤n
 and −p≤x≤p
, and performs the assignment ai=x
.

Akito is still not fully accustomed to controlling his new body, so help him calculate the minimum number of operations required to make the sum of all elements in the array equal to k
, or tell him that it is impossible.

Input
The first line of input contains one integer t
 (1≤t≤1000
) — the number of test cases.

The only line of each test case contains three integers n
, k
, p
 (1≤n≤50
, −2500≤k≤2500
, 1≤p≤50
) — the length of the array, the required sum, and the boundary of the segment from which numbers can be replaced.

Output
For each test case, output the minimum number of operations to achieve the final sum k
 in the array, or −1
 if it is impossible to achieve the sum k
.

Example
InputCopy
8
21 100 10
9 -420 42
5 -7 2
13 37 7
10 0 49
1 10 9
7 -7 7
20 31 1
OutputCopy
10
-1
4
6
0
-1
1
-1
Note
In the fifth example, the sum of the array is initially zero, so no operations are needed.

In the sixth example, the maximum sum in the array that we can achieve is 9
 (by assigning the number 9
 to the single element), so the sum 10
 cannot be obtained by any operations.

In the seventh example, only one operation a3=−7
 is needed.



*/