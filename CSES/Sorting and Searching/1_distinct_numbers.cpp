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
    ll n;
    cin >> n;
    vi a(n);
    fl(i, n)
    {
        cin >> a[i];
    }
    set<ll> s(a.begin(), a.end());
    cout << s.size();
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
You are given a list of n integers, and your task is to calculate the number of distinct values in the list.
Input
The first input line has an integer n: the number of values.
The second line has n integers x_1,x_2,\dots,x_n.
Output
Print one integers: the number of distinct values.
Constraints

1 \le n \le 2 \cdot 10^5
1 \le x_i \le 10^9

Example
Input:
5
2 3 2 2 3

Output:
2
*/