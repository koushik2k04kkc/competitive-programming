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
    int n, t;
    cin >> n >> t;
    string result = "";
    if (n == 1 && t == 10)
    {
        cout << -1;
        return;
    }
    if (t == 10)
    {
        n--;
    }
    result += to_string(t);
    for (int i = 0; i < n - 1; i++)
    {
        result += to_string(0);
    }
    cout << result;
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
Olesya loves numbers consisting of n digits, and Rodion only likes numbers that are divisible by t. Find some number that satisfies both of them.

Your task is: given the n and t print an integer strictly larger than zero consisting of n digits that is divisible by t. If such number doesn't exist, print  - 1.

Input
The single line contains two numbers, n and t (1 ≤ n ≤ 100, 2 ≤ t ≤ 10) — the length of the number and the number it should be divisible by.

Output
Print one such positive number without leading zeroes, — the answer to the problem, or  - 1, if such number doesn't exist. If there are multiple possible answers, you are allowed to print any of them.

Examples
InputCopy
3 2
OutputCopy
712

*/