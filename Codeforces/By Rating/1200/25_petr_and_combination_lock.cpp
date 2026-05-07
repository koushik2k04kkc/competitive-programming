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
    for (int m = 0; m < (1 << n);m++){
        int sum = 0;
        fl(i,n){
            if(m & (1<<i)){
                sum += a[i];
            } else{
                sum -= a[i];
            }
        }
        if(sum%360==0){
            py;
            return;
        }
    }
    pn;
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
Petr has just bought a new car. He's just arrived at the most known Petersburg's petrol station to refuel it when he suddenly discovered that the petrol tank is secured with a combination lock! The lock has a scale of 360
 degrees and a pointer which initially points at zero:


Petr called his car dealer, who instructed him to rotate the lock's wheel exactly n
 times. The i
-th rotation should be ai
 degrees, either clockwise or counterclockwise, and after all n
 rotations the pointer should again point at zero.

This confused Petr a little bit as he isn't sure which rotations should be done clockwise and which should be done counterclockwise. As there are many possible ways of rotating the lock, help him and find out whether there exists at least one, such that after all n
 rotations the pointer will point at zero again.

Input
The first line contains one integer n
 (1≤n≤15
) — the number of rotations.

Each of the following n
 lines contains one integer ai
 (1≤ai≤180
) — the angle of the i
-th rotation in degrees.

Output
If it is possible to do all the rotations so that the pointer will point at zero after all of them are performed, print a single word "YES". Otherwise, print "NO". Petr will probably buy a new car in this case.

You can print each letter in any case (upper or lower).

Examples
InputCopy
3
10
20
30
OutputCopy
YES
InputCopy
3
10
10
10
OutputCopy
NO
InputCopy
3
120
120
120
OutputCopy
YES
Note
In the first example, we can achieve our goal by applying the first and the second rotation clockwise, and performing the third rotation counterclockwise.

In the second example, it's impossible to perform the rotations in order to make the pointer point at zero in the end.

In the third example, Petr can do all three rotations clockwise. In this case, the whole wheel will be rotated by 360
 degrees clockwise and the pointer will point at zero again.



*/