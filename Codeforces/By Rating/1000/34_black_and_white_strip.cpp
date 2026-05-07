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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int white = 0;
    for (int i = 0; i < k;i++){
        if(s[i]=='W'){
            white++;
        }
    }
    int mn = white;
    for (int i = k; i < n;i++){
        if(s[i]=='W'){
            white++;
        } if(s[i-k]=='W'){
            white--;
        }
        mn = min(mn, white);
    }
    cout << mn nl;
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
You have a stripe of checkered paper of length n
. Each cell is either white or black.

What is the minimum number of cells that must be recolored from white to black in order to have a segment of k
 consecutive black cells on the stripe?

If the input data is such that a segment of k
 consecutive black cells already exists, then print 0.

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases.

Next, descriptions of t
 test cases follow.

The first line of the input contains two integers n
 and k
 (1≤k≤n≤2⋅105
). The second line consists of the letters 'W' (white) and 'B' (black). The line length is n
.

It is guaranteed that the sum of values n
 does not exceed 2⋅105
.

Output
For each of t
 test cases print an integer — the minimum number of cells that need to be repainted from white to black in order to have a segment of k
 consecutive black cells.

Example
InputCopy
4
5 3
BBWBW
5 5
BBWBW
5 1
BBWBW
1 1
W
OutputCopy
1
2
0
1
Note
In the first test case, s
="BBWBW" and k=3
. It is enough to recolor s3
 and get s
="BBBBW". This string contains a segment of length k=3
 consisting of the letters 'B'.

In the second test case of the example s
="BBWBW" and k=5
. It is enough to recolor s3
 and s5
 and get s
="BBBBB". This string contains a segment of length k=5
 consisting of the letters 'B'.

In the third test case of the example s
="BBWBW" and k=1
. The string s
 already contains a segment of length k=1
 consisting of the letters 'B'.



*/