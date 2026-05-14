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
    int n, i, ans = 0;
    cin >> n;
    for (i = n; i >= 1; i /= 2)
    {
        if (i % 2 == 1)
        {
            ans++;
            i--;
        }
    }
    cout << ans nl;
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
You are a lover of bacteria. You want to raise some bacteria in a box.

Initially, the box is empty. Each morning, you can put any number of bacteria into the box. And each night, every bacterium in the box will split into two bacteria. You hope to see exactly x bacteria in the box at some moment.

What is the minimum number of bacteria you need to put into the box across those days?

Input
The only line containing one integer x (1 ≤ x ≤ 109).

Output
The only line containing one integer: the answer.

Examples
InputCopy
5
OutputCopy
2
InputCopy
8
OutputCopy
1
Note
For the first sample, we can add one bacterium in the box in the first day morning and at the third morning there will be 4 bacteria in the box. Now we put one more resulting 5 in the box. We added 2 bacteria in the process so the answer is 2.

For the second sample, we can put one in the first morning and in the 4-th morning there will be 8 in the box. So the answer is 1.
*/