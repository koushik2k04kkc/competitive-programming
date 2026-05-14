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
    string s;
    char u;
    bool c = true;
    cin >> s;
    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
        {
            c = false;
        }
    }
    if (c == true)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (islower(s[j]))
                u = toupper(s[j]);
            else
                u = tolower(s[j]);
            cout << u;
        }
    }
    else
        cout << s;
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
wHAT DO WE NEED cAPS LOCK FOR?

Caps lock is a computer keyboard key. Pressing it sets an input mode in which typed letters are capital by default. If it is pressed by accident, it leads to accidents like the one we had in the first passage.

Let's consider that a word has been typed with the Caps lock key accidentally switched on, if:

either it only contains uppercase letters;
or all letters except for the first one are uppercase.
In this case we should automatically change the case of all letters. For example, the case of the letters that form words "hELLO", "HTTP", "z" should be changed.

Write a program that applies the rule mentioned above. If the rule cannot be applied, the program should leave the word unchanged.

Input
The first line of the input data contains a word consisting of uppercase and lowercase Latin letters. The word's length is from 1 to 100 characters, inclusive.

Output
Print the result of the given word's processing.

Examples
InputCopy
cAPS
OutputCopy
Caps
InputCopy
Lock
OutputCopy
Lock

*/