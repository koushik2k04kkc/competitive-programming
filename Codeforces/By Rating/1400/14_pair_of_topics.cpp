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
    vi a(n), b(n), c(n);
    fl(i, n) cin >> a[i];
    fl(i, n) cin >> b[i];
    fl(i,n){
    c[i] = a[i] - b[i];
    }
    sort(all(c));
    ll ans = 0;
    fl(i,n)
    {
        ll tmp = -c[i];
        int l = 0, h = n - 1;
        int p = n;
        while (l <= h)
        {
            int m = l + (h - l) / 2;
            if (c[m] > tmp)
            {
                p = m;
                h = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        if (p <= i)   p = i + 1;
        if (p < n)
        {
            ans += (n - p);
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
The next lecture in a high school requires two topics to be discussed. The i
-th topic is interesting by ai
 units for the teacher and by bi
 units for the students.

The pair of topics i
 and j
 (i<j
) is called good if ai+aj>bi+bj
 (i.e. it is more interesting for the teacher).

Your task is to find the number of good pairs of topics.

Input
The first line of the input contains one integer n
 (2≤n≤2⋅105
) — the number of topics.

The second line of the input contains n
 integers a1,a2,…,an
 (1≤ai≤109
), where ai
 is the interestingness of the i
-th topic for the teacher.

The third line of the input contains n
 integers b1,b2,…,bn
 (1≤bi≤109
), where bi
 is the interestingness of the i
-th topic for the students.

Output
Print one integer — the number of good pairs of topic.

Examples
InputCopy
5
4 8 2 6 2
4 5 4 1 3
OutputCopy
7
InputCopy
4
1 3 2 4
1 3 2 4
OutputCopy
0


*/