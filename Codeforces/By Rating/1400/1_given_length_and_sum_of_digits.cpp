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
    int M, S;
    cin >> M >> S;
    if (M == 1 && S == 0)
    {
        cout << "0 0" nl;
        return;
    }

    if (S == 0 || S > 9 * M)
    {
        cout << "-1 -1" nl;
        return ;
    }
    string low = "";
    int T = S;
    for (int i = 0; i < M; i++)
    {
        int dig = i ? 0 : 1;
        dig = max(dig, T - 9 * (M - 1 - i));
        T -= dig;
        low += ('0' + dig);
    }
    string high = "";
    T = S;
    for (int i = 0; i < M; i++)
    {
        int dig = min(9, T);
        T -= dig;
        high += ('0' + dig);
    }
    cout << low << " " << high nl;
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
You have a positive integer m and a non-negative integer s. Your task is to find the smallest and the largest of the numbers that have length m and sum of digits s. The required numbers should be non-negative integers written in the decimal base without leading zeroes.

Input
The single line of the input contains a pair of integers m, s (1 ≤ m ≤ 100, 0 ≤ s ≤ 900) — the length and the sum of the digits of the required numbers.

Output
In the output print the pair of the required non-negative integer numbers — first the minimum possible number, then — the maximum possible number. If no numbers satisfying conditions required exist, print the pair of numbers "-1 -1" (without the quotes).

Examples
InputCopy
2 15
OutputCopy
69 96
InputCopy
3 0
OutputCopy
-1 -1

*/