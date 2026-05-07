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
    string s;
    cin >> s;
    vector<char> freq;
    for(auto c: s){
        freq[c]++;
    }
    if(s.size()%2==0){
        int f = 1;
        for(auto ch:freq){
            f &= (ch % 2 == 0);
        }
        if(!f){
            cout << "NO SOLUTION\n";
            return;
        }
        string ans = "";
        fl(i,26){
            int x = freq[i] / 2;
            while(x--){
                ans += ((char)('a' + i));
            }
        }
        cout << ans;
        reverse(all(ans));
        cout << ans nl;
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