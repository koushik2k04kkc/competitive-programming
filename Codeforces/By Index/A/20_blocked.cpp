#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<ll> vi;
const ll MOD = (ll)1e9 + 7;
void solve()
{
    ll n;
    cin >> n;
    vi a(n);
    set<int> s;
    fl(i,n){
        cin >> a[i];
        s.insert(a[i]);
    }
    sort(rall(a));
    if(s.size()==n){
        for(auto x : a){
            cout << x << " ";
        }
        cout << nl;
    } else {
        cout << -1 << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}