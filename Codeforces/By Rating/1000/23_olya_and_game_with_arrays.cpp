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
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

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
    int n;
    cin >> n;
    int min_global = INT_MAX, min_second_min = INT_MAX;
    ll sum_second_min = 0;
    while(n--)
    {
        int mi;
        cin >> mi;
        vector<int> a(mi);
        for (int j = 0; j < mi; j++)
        {
            cin >> a[j];
        }
        sort(a.begin(), a.end());
        min_global = min(min_global, a[0]);
        sum_second_min += a[1];
        min_second_min = min(min_second_min, a[1]);
    }
    cout << min_global + sum_second_min - min_second_min nl;
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