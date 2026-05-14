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

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    // ll ans = n * a;
    // if (b < 2 * a)
    // {
    //     ans = (n / 2) * b + (n % 2) * a;
    // }
    // cout << ans <<nl;

    ll c1 = n * a;
    ll c2 = (n / 2) * b + (n % 2) * a;
    cout << min(c1, c2) << nl;
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
/*
The price of one yogurt at the "Vosmiorochka" store is a
 burles, but there is a promotion where you can buy two yogurts for b
 burles.

Maxim needs to buy exactly n
 yogurts. When buying two yogurts, he can choose to buy them at the regular price or at the promotion price.

What is the minimum amount of burles Maxim should spend to buy n
 yogurts?

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first and only line of each test case contains three integers n
, a
, and b
 (1≤n≤100
, 1≤a,b≤30
) — the number of yogurts Maxim wants to buy, the price for one yogurt, and the price for two yogurts on promotion.

Output
For each test case, print in a separate line the minimum cost of buying n
 yogurts at "Vosmiorochka".

Example
InputCopy
4
2 5 9
3 5 9
3 5 11
4 5 11
OutputCopy
9
14
15
20
Note
In the third test case of the example, it is more advantageous to buy three yogurts for 15
 burles than two for 11
 and one for 5
.

In the fourth test case of the example, you need to buy four yogurts, each for 5
 burles.



*/