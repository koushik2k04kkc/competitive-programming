#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    ll sum = 0;
    int zero = 0, one = 0, two = 0;
    fl(i,n){
        cin >> a[i];
        sum += a[i];
    }
   if(s<sum||s==sum+1){
     for(int x:a){
        if(x==0) {
            zero++;
        }
        if(x==1){
            one++;
        }
        if(x==2){
            two++;
        }
     }
     fl(i,zero){
         cout << 0 << ' ';
     }
     fl(i,two){
         cout << 2 << ' ';
     }
     fl(i,one){
         cout << 1 << ' ';
     }
     cout nl;
   } else{
       cout << -1 nl;
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}