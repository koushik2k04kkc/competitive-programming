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
    cin >> n;
    vi h(n);
    fl(i, n)
    {
        cin >> h[i];
    }
    sort(h.begin(), h.end());
    if (n == 2)
    {
        cout << h[0] << " " << h[1] nl;
        return;
    }
    int pos = -1, mn = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        if (mn > abs(h[i] - h[i - 1]))
        {
            pos = i;
            mn = abs(h[i] - h[i - 1]);
        }
    }
    for (int i = pos; i < n; i++)
    {
        cout << h[i] << " ";
    }
    for (int i = 0; i < pos; i++)
    {
        cout << h[i] << " ";
    }
    cout nl;
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