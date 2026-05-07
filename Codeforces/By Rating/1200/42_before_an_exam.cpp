#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<ll> vi;
const ll MOD = (ll)1e9 + 7;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    ll d, sum;
    cin >> d >> sum;
    vi mn(d), mx(d);
    fl(i, d) cin >> mn[i] >> mx[i];
    int mn_sum = 0, mx_sum = 0;
    fl(i,d)
    {
        mn_sum += mn[i];
        mx_sum += mx[i];
    }
    if (sum < mn_sum || sum > mx_sum)
    {
        pn;
        return;
    }
    py;
    vi ans = mn;
    ll baki = sum - mn_sum;
    fl(i,d)
    {
        ll add = min(mx[i] - mn[i], baki);
        ans[i] += add;
        baki -= add;
    }
    for(auto k:ans) cout << k << " ";
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
Tomorrow Peter has a Biology exam. He does not like this subject much, but d days ago he learnt that he would have to take this exam. Peter's strict parents made him prepare for the exam immediately, for this purpose he has to study not less than minTimei and not more than maxTimei hours per each i-th day. Moreover, they warned Peter that a day before the exam they would check how he has followed their instructions.

So, today is the day when Peter's parents ask him to show the timetable of his preparatory studies. But the boy has counted only the sum of hours sumTime spent him on preparation, and now he wants to know if he can show his parents a timetable sсhedule with d numbers, where each number sсhedulei stands for the time in hours spent by Peter each i-th day on biology studies, and satisfying the limitations imposed by his parents, and at the same time the sum total of all schedulei should equal to sumTime.

Input
The first input line contains two integer numbers d, sumTime (1 ≤ d ≤ 30, 0 ≤ sumTime ≤ 240) — the amount of days, during which Peter studied, and the total amount of hours, spent on preparation. Each of the following d lines contains two integer numbers minTimei, maxTimei (0 ≤ minTimei ≤ maxTimei ≤ 8), separated by a space — minimum and maximum amount of hours that Peter could spent in the i-th day.

Output
In the first line print YES, and in the second line print d numbers (separated by a space), each of the numbers — amount of hours, spent by Peter on preparation in the corresponding day, if he followed his parents' instructions; or print NO in the unique line. If there are many solutions, print any of them.

Examples
InputCopy
1 48
5 7
OutputCopy
NO
InputCopy
2 5
0 1
3 5
OutputCopy
YES
1 4

*/