#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl "\n"
#define be(v) v.begin(), v.end()
#define eb(v) v.rbegin(), v.rend()

typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    ll n;
    cin >> n;
    vi a(1000001, 0);
    for (ll i = 1; i <= 1000000;i++){
        for (ll j = i; j <= 1000000;j+=i){
            a[j]++;
        }
    }
    while(n--){
        ll k;
        cin >> k;
        cout << a[k] << nl;
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
Given n integers, your task is to report for each integer the number of its divisors.
For example, if x=18, the correct answer is 6 because its divisors are 1,2,3,6,9,18.
Input
The first input line has an integer n: the number of integers.
After this, there are n lines, each containing an integer x.
Output
For each integer, print the number of its divisors.
Constraints

1 \le n \le 10^5
1 \le x \le 10^6

Example
Input:
3
16
17
18

Output:
5
2
6
*/