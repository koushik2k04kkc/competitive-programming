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
    vector<string> a(n);
    fl(i,n){
        cin >> a[i];
    }
    for (int i = n-1; i >= 0;i--){
        for (int j = 0; j < 4;j++){
            if(a[i][j]=='#'){
                cout << j + 1 << " ";
                break;
            }
        }
        
    }
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
You are playing your favorite rhythm game, osu!mania. The layout of your beatmap consists of n
 rows and 4
 columns. Because notes at the bottom are closer, you will process the bottommost row first and the topmost row last. Each row will contain exactly one note, represented as a '#'.

For each note 1,2,…,n
, in the order of processing, output the column in which the note appears.

Input
The first line contains t
 (1≤t≤100
) — the number of test cases.

For each test case, the first line contains n
 (1≤n≤500
) — the number of rows of the beatmap.

The following n
 lines contain 4
 characters. The i
-th line represents the i
-th row of the beatmap from the top. It is guaranteed that the characters are either '.' or '#', and exactly one of the characters is '#'.

It is guaranteed that the sum of n
 over all test cases does not exceed 500
.

Output
For each test case, output n
 integers on a new line, the column that the i
-th note appears in for all i
 from 1
 to n
.

Example
InputCopy
3
4
#...
.#..
..#.
...#
2
.#..
.#..
1
...#
OutputCopy
4 3 2 1
2 2
4


*/