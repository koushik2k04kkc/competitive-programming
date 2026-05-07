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
    int n;
    cin >> n;
    vi a(n);
    fl(i, n) cin >> a[i];
    sort(be(a));
    int mx = 0;
    int l = 0;
    for (int r = 0; r < n; ++r)
    {
        while (a[r] - a[l] > 5)
            l++;
        mx = max(mx, r - l + 1);
    }
    cout << mx nl;
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
You are a coach at your local university. There are n
 students under your supervision, the programming skill of the i
-th student is ai
.

You have to create a team for a new programming competition. As you know, the more students some team has the more probable its victory is! So you have to create a team with the maximum number of students. But you also know that a team should be balanced. It means that the programming skill of each pair of students in a created team should differ by no more than 5
.

Your task is to report the maximum possible number of students in a balanced team.

Input
The first line of the input contains one integer n
 (1≤n≤2⋅105
) — the number of students.

The second line of the input contains n
 integers a1,a2,…,an
 (1≤ai≤109
), where ai
 is a programming skill of the i
-th student.

Output
Print one integer — the maximum possible number of students in a balanced team.

Examples
InputCopy
6
1 10 17 12 15 2
OutputCopy
3
InputCopy
10
1337 1337 1337 1337 1337 1337 1337 1337 1337 1337
OutputCopy
10
InputCopy
6
1 1000 10000 10 100 1000000000
OutputCopy
1
Note
In the first example you can create a team with skills [12,17,15]
.

In the second example you can take all students in a team because their programming skills are equal.

In the third example you can create a team consisting of a single student (and you cannot create a team consisting of at least two students).



*/