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
    int n, result;
    cin >> n;
    if (n == 0)
    {
        cout << 1 nl;
        return;
    }
    switch (n % 4)
    {
    case 1:
        result = 8;
        break;
    case 2:
        result = 4;
        break;
    case 3:
        result = 2;
        break;
    case 0:
        result = 6;
        break;
    }
    cout << result nl;
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
There exists an island called Arpa’s land, some beautiful girls live there, as ugly ones do.

Mehrdad wants to become minister of Arpa’s land. Arpa has prepared an exam. Exam has only one question, given n, print the last digit of 1378n.


Mehrdad has become quite confused and wants you to help him. Please help, although it's a naive cheat.

Input
The single line of input contains one integer n (0  ≤  n  ≤  109).

Output
Print single integer — the last digit of 1378n.

Examples
InputCopy
1
OutputCopy
8
InputCopy
2
OutputCopy
4
Note
In the first example, last digit of 13781 = 1378 is 8.

In the second example, last digit of 13782 = 1378·1378 = 1898884 is 4.



*/