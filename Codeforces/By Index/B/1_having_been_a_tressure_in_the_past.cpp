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

    int n;
    string s;
    cin >> n >> s;
    int count_dash = 0, count_underscore = 0;
    ll result = 0;
    for (char c : s)
    {
        if (c == '-')
            count_dash++;
        if (c == '_')
            count_underscore++;
    }
    long long left_dashes = 0;
    long long middle_underscores = 0;
    for (char c : s)
    {
        if (c == '-')
        {
            left_dashes++;
        }
        else if (c == '_')
        {
            middle_underscores += left_dashes;
        }
    }
    cout << middle_underscores << endl;
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