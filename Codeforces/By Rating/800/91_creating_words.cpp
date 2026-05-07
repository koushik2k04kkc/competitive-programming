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
    string a, b;
    cin >> a >> b;
    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/*
Matthew is given two strings a
 and b
, both of length 3
. He thinks it's particularly funny to create two new words by swapping the first character of a
 with the first character of b
. He wants you to output a
 and b
 after the swap.

Note that the new words may not necessarily be different.

Input
The first line contains t
 (1≤t≤100
)  — the number of test cases.

The first and only line of each test case contains two space-separated strings, a
 and b
, both of length 3
. The strings only contain lowercase Latin letters.

Output
For each test case, after the swap, output a
 and b
, separated by a space.

Example
InputCopy
6
bit set
cat dog
hot dog
uwu owo
cat cat
zzz zzz
OutputCopy
sit bet
dat cog
dot hog
owu uwo
cat cat
zzz zzz


*/