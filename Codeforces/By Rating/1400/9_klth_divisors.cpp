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
    ll n, k;
    cin >> n >> k;
    vi a;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (n / i == i)
            {
                a.push_back(i);
            }
            else
            {
                a.push_back(i);
                a.push_back(n / i);
            }
        }
    }
    ll s = a.size();
    sort(all(a));
    if (s < k)
    {
        cout << -1 nl;
    }
    else
    {
        cout << a[k - 1] nl;
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
/*
You are given two integers n and k. Find k-th smallest divisor of n, or report that it doesn't exist.

Divisor of n is any such natural number, that n can be divided by it without remainder.

Input
The first line contains two integers n and k (1 ≤ n ≤ 1015, 1 ≤ k ≤ 109).

Output
If n has less than k divisors, output -1.

Otherwise, output the k-th smallest divisor of n.

Examples
InputCopy
4 2
OutputCopy
2
InputCopy
5 3
OutputCopy
-1
InputCopy
12 5
OutputCopy
6
Note
In the first example, number 4 has three divisors: 1, 2 and 4. The second one is 2.

In the second example, number 5 has only two divisors: 1 and 5. The third divisor doesn't exist, so the answer is -1.



*/