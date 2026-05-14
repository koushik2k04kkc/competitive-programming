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
    ll n;
    cin >> n;
    if (n <= 10)
    {
        if (n <= 6)
            cout << 15 nl;
        else if (n <= 8)
            cout << 20 nl;
        else
            cout << 25 nl;
    }
    else
    {
        ll ans = (n / 10) * 25;
        ll m = n % 10;

        if (m)
        {
            if (m == 1 || m == 2)
                ans += 5;
            else if (m < 5)
                ans += 10;
            else if (m <= 6)
                ans += 15;
            else if (m <= 8)
                ans += 20;
            else
                ans += 25;
        }
        cout << ans nl;
    }
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
/*
PizzaForces is Petya's favorite pizzeria. PizzaForces makes and sells pizzas of three sizes: small pizzas consist of 6
 slices, medium ones consist of 8
 slices, and large pizzas consist of 10
 slices each. Baking them takes 15
, 20
 and 25
 minutes, respectively.

Petya's birthday is today, and n
 of his friends will come, so he decided to make an order from his favorite pizzeria. Petya wants to order so much pizza that each of his friends gets at least one slice of pizza. The cooking time of the order is the total baking time of all the pizzas in the order.

Your task is to determine the minimum number of minutes that is needed to make pizzas containing at least n
 slices in total. For example:

if 12
 friends come to Petya's birthday, he has to order pizzas containing at least 12
 slices in total. He can order two small pizzas, containing exactly 12
 slices, and the time to bake them is 30
 minutes;
if 15
 friends come to Petya's birthday, he has to order pizzas containing at least 15
 slices in total. He can order a small pizza and a large pizza, containing 16
 slices, and the time to bake them is 40
 minutes;
if 300
 friends come to Petya's birthday, he has to order pizzas containing at least 300
 slices in total. He can order 15
 small pizzas, 10
 medium pizzas and 13
 large pizzas, in total they contain 15⋅6+10⋅8+13⋅10=300
 slices, and the total time to bake them is 15⋅15+10⋅20+13⋅25=750
 minutes;
if only one friend comes to Petya's birthday, he can order a small pizza, and the time to bake it is 15
 minutes.
Input
The first line contains a single integer t
 (1≤t≤104
) — the number of testcases.

Each testcase consists of a single line that contains a single integer n
 (1≤n≤1016
) — the number of Petya's friends.

Output
For each testcase, print one integer — the minimum number of minutes that is needed to bake pizzas containing at least n
 slices in total.

Example
InputCopy
6
12
15
300
1
9999999999999999
3
OutputCopy
30
40
750
15
25000000000000000
15


*/