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
    cin>> s;
    ll n = s.size();
    int AB=0,BA=0;
    fl(i,n-1){
        if(s[i]=='a' && s[i+1]=='b'){
            AB++;
        } else if(s[i]=='b' && s[i+1]=='a'){
            BA++;
        }
    }
    if(AB>BA){
        if(s[0]=='a'){
            s[0] = 'b';
        } else{
            s[n - 1] = 'a';
        }
    }
    else if(BA>AB){
        if(s[0]=='b'){
            s[0] = 'a';
        } else{
            s[n - 1] = 'b';
        }
    }
    cout << s nl;
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