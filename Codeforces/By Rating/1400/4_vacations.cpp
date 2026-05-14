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
    ll n;
    cin >> n;
    vi a(n);
    fl(i, n) cin >> a[i];
    const ll INF = 1000000;
    vector<vi> dp(n, vi(3, INF));
    dp[0][0] = 1;
    if (a[0] == 1 || a[0] == 3)
    {
        dp[0][1] = 0;
    }
    if (a[0] == 2 || a[0] == 3)
    {
        dp[0][2] = 0;
    }
    for (int i = 1; i < n; i++)
    {
        dp[i][0] = 1 + min({dp[i - 1][0], dp[i - 1][1], dp[i - 1][2]});
        if (a[i] == 1 || a[i] == 3)
        {
            dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]);
        }
        if (a[i] == 2 || a[i] == 3)
        {
            dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]);
        }
    }
    cout << min({dp[n - 1][0], dp[n - 1][1], dp[n - 1][2]}) nl;
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
Vasya has n days of vacations! So he decided to improve his IT skills and do sport. Vasya knows the following information about each of this n days: whether that gym opened and whether a contest was carried out in the Internet on that day. For the i-th day there are four options:

on this day the gym is closed and the contest is not carried out;
on this day the gym is closed and the contest is carried out;
on this day the gym is open and the contest is not carried out;
on this day the gym is open and the contest is carried out.
On each of days Vasya can either have a rest or write the contest (if it is carried out on this day), or do sport (if the gym is open on this day).

Find the minimum number of days on which Vasya will have a rest (it means, he will not do sport and write the contest at the same time). The only limitation that Vasya has — he does not want to do the same activity on two consecutive days: it means, he will not do sport on two consecutive days, and write the contest on two consecutive days.

Input
The first line contains a positive integer n (1 ≤ n ≤ 100) — the number of days of Vasya's vacations.

The second line contains the sequence of integers a1, a2, ..., an (0 ≤ ai ≤ 3) separated by space, where:

ai equals 0, if on the i-th day of vacations the gym is closed and the contest is not carried out;
ai equals 1, if on the i-th day of vacations the gym is closed, but the contest is carried out;
ai equals 2, if on the i-th day of vacations the gym is open and the contest is not carried out;
ai equals 3, if on the i-th day of vacations the gym is open and the contest is carried out.
Output
Print the minimum possible number of days on which Vasya will have a rest. Remember that Vasya refuses:

to do sport on any two consecutive days,
to write the contest on any two consecutive days.
Examples
InputCopy
4
1 3 2 0
OutputCopy
2
InputCopy
7
1 3 3 2 1 2 3
OutputCopy
0
InputCopy
2
2 2
OutputCopy
1
Note
In the first test Vasya can write the contest on the day number 1 and do sport on the day number 3. Thus, he will have a rest for only 2 days.

In the second test Vasya should write contests on days number 1, 3, 5 and 7, in other days do sport. Thus, he will not have a rest for a single day.

In the third test Vasya can do sport either on a day number 1 or number 2. He can not do sport in two days, because it will be contrary to the his limitation. Thus, he will have a rest for only one day.



*/