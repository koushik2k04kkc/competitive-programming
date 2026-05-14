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
    int bal = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            bal++;
        }
        else
        {
            --bal;
        }
        if (bal == 0 && i != s.size() - 1)
        {
            py;
            return;
        }
    }
    pn;
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
In 2077, robots decided to get rid of balanced bracket sequences once and for all!

A bracket sequence is called balanced if it can be constructed by the following formal grammar.

The empty sequence ∅
 is balanced.
If the bracket sequence A
 is balanced, then (A)
 is also balanced.
If the bracket sequences A
 and B
 are balanced, then the concatenated sequence AB
 is also balanced.
You are the head of the department for combating balanced bracket sequences, and your main task is to determine which brackets you can destroy and which you cannot.

You are given a balanced bracket sequence represented by a string s
, consisting of the characters ( and ). Since the robots' capabilities are not limitless, they can remove exactly one opening bracket and exactly one closing bracket from the string.

Your task is to determine whether the robots can delete such two brackets so that the string s
 is no longer a balanced bracket sequence.
*/