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
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    for (int i = 1; i <= n;i++){
        if(x%i==0 && x/i<=n){
            cnt++;
        }
    }
    cout << cnt nl;
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
Let's consider a table consisting of n rows and n columns. The cell located at the intersection of i-th row and j-th column contains number i × j. The rows and columns are numbered starting from 1.

You are given a positive integer x. Your task is to count the number of cells in a table that contain number x.

Input
The single line contains numbers n and x (1 ≤ n ≤ 105, 1 ≤ x ≤ 109) — the size of the table and the number that we are looking for in the table.

Output
Print a single number: the number of times x occurs in the table.

Examples
InputCopy
10 5
OutputCopy
2
InputCopy
6 12
OutputCopy
4
InputCopy
5 13
OutputCopy
0
Note
A table for the second sample test is given below. The occurrences of number 12 are marked bold.


*/