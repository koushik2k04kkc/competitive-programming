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
    int n;
    cin >> n;
    vi a(n);
    fl(i, n) cin >> a[i];
    sort(all(a));
    int cnt = 1, curr = 1, mx = 1;
    for (int i = 1; i < n;i++){
        if(a[i]==a[i-1]){
            curr++;
        } else{
            cnt++;
            curr = 1;
        }
        mx = max(mx, curr);
    }
    cout << mx << " " << cnt nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}
/*
Little Vasya has received a young builder’s kit. The kit consists of several wooden bars, the lengths of all of them are known. The bars can be put one on the top of the other if their lengths are the same.

Vasya wants to construct the minimal number of towers from the bars. Help Vasya to use the bars in the best way possible.

Input
The first line contains an integer N (1 ≤ N ≤ 1000) — the number of bars at Vasya’s disposal. The second line contains N space-separated integers li — the lengths of the bars. All the lengths are natural numbers not exceeding 1000.

Output
In one line output two numbers — the height of the largest tower and their total number. Remember that Vasya should use all the bars.

Examples
InputCopy
3
1 2 3
OutputCopy
1 3
InputCopy
4
6 5 6 7
OutputCopy
2 3

*/