#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    string s;
    cin >> s;
    int cntT = 0;
    for (char c : s)
    {
        if (c == 'T')
            cntT++;
    }
    for (int i = 0; i < cntT; i++)
    {
        cout << 'T';
    }
    for (char c : s)
    {
        if (c != 'T')
        {
            cout << c;
        }
    }
    cout nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/*
It is known that a contest can be represented by a string s
, consisting of uppercase Latin letters that denote problems. It is also known that a contest is difficult if it contains "FFT" or "NTT" as a contiguous substring.

Your task is to rearrange the problem in contest s
 in such a way that this contest is not difficult. If the initial contest is not difficult, you may leave it as it is.

Input
Each test consists of several test cases. The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. The description of the test cases follows.

The only line of each test case contains s
 (1≤|s|≤2⋅105
).

Additional constraints on the input data:

the total length of strings across all test cases does not exceed 2⋅105
.
Output
For each test case, output a string — a non-difficult contest that was obtained from s
 by rearranging the letters.

If there are multiple correct answers, you may output any. It can be shown that at least one correct answer always exists.

Example
InputCopy
5
FFT
ABFBANTTA
FFTNTT
FFTFFTFFTNNTNNT
AFFTBFFNTTFTTZ
OutputCopy
FTF
ABFBANATT
NTFTFT
TFFFFFFNTNTNTNT
AFTFBTTFFNFTTZ


*/