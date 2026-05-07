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
    int k;
    cin >> k;
    int cnt = 0,sum=0,i;
    while (1)
    {
        int sum = 0, t = i;
        while (t > 0)
        {
            sum += t % 10;
            t /= 10;
        }
        if (sum == 10)
        {
            cnt++;
            if (cnt == k)
            {
                cout << i nl;
                break;
            }
        }
        i++;
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
We consider a positive integer perfect, if and only if the sum of its digits is exactly 10
. Given a positive integer k
, your task is to find the k
-th smallest perfect positive integer.

Input
A single line with a positive integer k
 (1≤k≤10000
).

Output
A single number, denoting the k
-th smallest perfect integer.

Examples
InputCopy
1
OutputCopy
19
InputCopy
2
OutputCopy
28
Note
The first perfect integer is 19
 and the second one is 28
.

*/