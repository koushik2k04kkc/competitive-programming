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
    vector<int> a(n);
    fl(i,n)
    {
        cin >> a[i];
    }
    vector<int> sorted = a;
    sort(sorted.begin(), sorted.end());
    int l = 0, r = n - 1;
    while (l < n && a[l] == sorted[l])
    {
        l++;
    }
    if (l == n)
    {
        cout << "yes\n1 1" nl;
        return;
    }
    while (r >= 0 && a[r] == sorted[r])
    {
        r--;
    }
    reverse(a.begin() + l, a.begin() + r + 1);
    if (a == sorted)
    {
        cout << "yes\n"
             << l + 1 << " " << r + 1 nl;
    }
    else
    {
        cout << "no" nl;
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