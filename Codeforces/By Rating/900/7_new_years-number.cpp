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
    int rem = n % 2020;
    int quotient = n / 2020;
    /*
    n=2020×quotient+remainder।
যদি remainder ছোট বা সমান হয়
quotient-এর, তাহলে
n-এর বাকি অংশ ২০২১ যোগ করে পূরণ করা সম্ভব।
    */
    if(rem<=quotient){
        py
    } else{
        pn
    }
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
/*
Polycarp remembered the 2020
-th year, and he is happy with the arrival of the new 2021
-th year. To remember such a wonderful moment, Polycarp wants to represent the number n
 as the sum of a certain number of 2020
 and a certain number of 2021
.

For example, if:

n=4041
, then the number n
 can be represented as the sum 2020+2021
;
n=4042
, then the number n
 can be represented as the sum 2021+2021
;
n=8081
, then the number n
 can be represented as the sum 2020+2020+2020+2021
;
n=8079
, then the number n
 cannot be represented as the sum of the numbers 2020
 and 2021
.
Help Polycarp to find out whether the number n
 can be represented as the sum of a certain number of numbers 2020
 and a certain number of numbers 2021
.

Input
The first line contains one integer t
 (1≤t≤104
) — the number of test cases. Then t
 test cases follow.

Each test case contains one integer n
 (1≤n≤106
) — the number that Polycarp wants to represent as the sum of the numbers 2020
 and 2021
.

Output
For each test case, output on a separate line:

"YES" if the number n
 is representable as the sum of a certain number of 2020
 and a certain number of 2021
;
"NO" otherwise.
You can output "YES" and "NO" in any case (for example, the strings yEs, yes, Yes and YES will be recognized as positive).

Example
InputCopy
5
1
4041
4042
8081
8079
OutputCopy
NO
YES
YES
YES
NO


*/