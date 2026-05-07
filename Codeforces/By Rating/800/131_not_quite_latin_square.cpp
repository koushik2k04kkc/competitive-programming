#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<ll> vi;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int cnt[3] = {};
    fl(i,9)
    {
        char c;
        cin >> c;
        if (c != '?')
        {
            cnt[c - 'A']++;
        }
    }
    fl(i,3)
    {
        if (cnt[i] < 3)
        {
            cout << (char)('A' + i) << nl;
        }
    }
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
A Latin square is a 3×3
 grid made up of the letters A
, B
, and C
 such that:

in each row, the letters A
, B
, and C
 each appear once, and
in each column, the letters A
, B
, and C
 each appear once.
For example, one possible Latin square is shown below.
⎡⎣⎢ACBBACCBA⎤⎦⎥
You are given a Latin square, but one of the letters was replaced with a question mark ?
. Find the letter that was replaced.

Input
The first line of the input contains a single integer t
 (1≤t≤108
) — the number of testcases.

Each test case contains three lines, each consisting of three characters, representing the Latin square. Each character is one of A
, B
, C
, or ?
.

Each test case is a Latin square with exactly one of the letters replaced with a question mark ?
.

Output
For each test case, output the letter that was replaced.

Example
InputCopy
3
ABC
C?B
BCA
BCA
CA?
ABC
?AB
BCA
ABC
OutputCopy
A
B
C
Note
The correct Latin squares for the three test cases are shown below:

⎡⎣⎢ACBBACCBA⎤⎦⎥⎡⎣⎢BCACABABC⎤⎦⎥⎡⎣⎢CBAACBBAC⎤⎦⎥
*/