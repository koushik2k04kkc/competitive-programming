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
    int n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    if (b >= 0)
    {
        cout << n * (a + b) nl;
        return;
    }
    int count = 1;
    for (int i = 1; i < n;++i)
    {
        if (s[i] != s[i - 1])
        {
            count++;
        }
    }
    int k = count / 2;
    k++;
    int result = n * a + k * b;
    cout << result nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
You are given a string s
 of length n
 consisting only of the characters 0 and 1.

You perform the following operation until the string becomes empty: choose some consecutive substring of equal characters, erase it from the string and glue the remaining two parts together (any of them can be empty) in the same order. For example, if you erase the substring 111 from the string 111110, you will get the string 110. When you delete a substring of length l
, you get a⋅l+b
 points.

Your task is to calculate the maximum number of points that you can score in total, if you have to make the given string empty.

Input
The first line contains a single integer t
 (1≤t≤2000
) — the number of testcases.

The first line of each testcase contains three integers n
, a
 and b
 (1≤n≤100;−100≤a,b≤100
) — the length of the string s
 and the parameters a
 and b
.

The second line contains the string s
. The string s
 consists only of the characters 0 and 1.

Output
For each testcase, print a single integer — the maximum number of points that you can score.

Example
InputCopy
3
3 2 0
000
5 -2 5
11001
6 1 -4
100111
OutputCopy
6
15
-2
Note
In the first example, it is enough to delete the entire string, then we will get 2⋅3+0=6
 points.

In the second example, if we delete characters one by one, then for each deleted character we will get (−2)⋅1+5=3
 points, i. e. 15
 points in total.

In the third example, we can delete the substring 00 from the string 100111, we get 1⋅2+(−4)=−2
 points, and the string will be equal to 1111, removing it entirely we get 1⋅4+(−4)=0
 points. In total, we got −2
 points for 2
 operations.



*/