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
    string s;
    cin >> s;
    int n = s.size();
    vi prefix(n, 0);
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1];
        if(s[i]==s[i-1]){
            prefix[i]++;
        }
    }
    int m;
    cin >> m;
    while(m--){
        int l, r;
        cin >> l >> r;
        cout << prefix[r - 1] - prefix[l - 1] nl;
    }
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
Ilya the Lion wants to help all his friends with passing exams. They need to solve the following problem to pass the IT exam.

You've got string s = s1s2... sn (n is the length of the string), consisting only of characters "." and "#" and m queries. Each query is described by a pair of integers li, ri (1 ≤ li < ri ≤ n). The answer to the query li, ri is the number of such integers i (li ≤ i < ri), that si = si + 1.

Ilya the Lion wants to help his friends but is there anyone to help him? Help Ilya, solve the problem.

Input
The first line contains string s of length n (2 ≤ n ≤ 105). It is guaranteed that the given string only consists of characters "." and "#".

The next line contains integer m (1 ≤ m ≤ 105) — the number of queries. Each of the next m lines contains the description of the corresponding query. The i-th line contains integers li, ri (1 ≤ li < ri ≤ n).

Output
Print m integers — the answers to the queries in the order in which they are given in the input.

Examples
InputCopy
......
4
3 4
2 3
1 6
2 6
OutputCopy
1
1
5
4
InputCopy
#..###
5
1 3
5 6
1 5
3 6
3 4
OutputCopy
1
1
2
2
0

*/