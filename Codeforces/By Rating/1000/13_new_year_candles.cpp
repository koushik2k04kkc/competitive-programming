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
    int i, a, b;
    cin >> a >> b;
    int ans = a;
    while (a >= b)
    {
        ans += a / b;
        a = a / b + a % b;
    }
    cout << ans;
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
Vasily the Programmer loves romance, so this year he decided to illuminate his room with candles.

Vasily has a candles.When Vasily lights up a new candle, it first burns for an hour and then it goes out. Vasily is smart, so he can make b went out candles into a new candle. As a result, this new candle can be used like any other new candle.

Now Vasily wonders: for how many hours can his candles light up the room if he acts optimally well? Help him find this number.

Input
The single line contains two integers, a and b (1 ≤ a ≤ 1000; 2 ≤ b ≤ 1000).

Output
Print a single integer — the number of hours Vasily can light up the room for.

Examples
InputCopy
4 2
OutputCopy
7
InputCopy
6 3
OutputCopy
8
Note
Consider the first sample. For the first four hours Vasily lights up new candles, then he uses four burned out candles to make two new ones and lights them up. When these candles go out (stop burning), Vasily can make another candle. Overall, Vasily can light up the room for 7
*/