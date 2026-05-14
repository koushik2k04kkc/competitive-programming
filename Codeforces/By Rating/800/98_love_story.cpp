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
    int cnt = 0;
    if(s[0]!='c'){
        cnt++;
    }
    if (s[1] != 'o')
    {
        cnt++;
    }
    if (s[2] != 'd')
    {
        cnt++;
    }
    if (s[3] != 'e')
    {
        cnt++;
    }
    if (s[4] != 'f')
    {
        cnt++;
    }
    if (s[5] != 'o')
    {
        cnt++;
    }
    if (s[6] != 'r')
    {
        cnt++;
    }
    if (s[7] != 'c')
    {
        cnt++;
    }
    if (s[8] != 'e')
    {
        cnt++;
    }
    if (s[9] != 's')
    {
        cnt++;
    }
    cout << cnt nl;
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