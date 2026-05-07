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
    ll n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i < n;i++){
        if(n%i==0)
            cnt++;
    }
    cout << cnt;
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
Fafa owns a company that works on huge projects. There are n employees in Fafa's company. Whenever the company has a new project to start working on, Fafa has to divide the tasks of this project among all the employees.

Fafa finds doing this every time is very tiring for him. So, he decided to choose the best l employees in his company as team leaders. Whenever there is a new project, Fafa will divide the tasks among only the team leaders and each team leader will be responsible of some positive number of employees to give them the tasks. To make this process fair for the team leaders, each one of them should be responsible for the same number of employees. Moreover, every employee, who is not a team leader, has to be under the responsibility of exactly one team leader, and no team leader is responsible for another team leader.

Given the number of employees n, find in how many ways Fafa could choose the number of team leaders l in such a way that it is possible to divide employees between them evenly.

Input
The input consists of a single line containing a positive integer n (2 ≤ n ≤ 105) — the number of employees in Fafa's company.

Output
Print a single integer representing the answer to the problem.

Examples
InputCopy
2
OutputCopy
1
InputCopy
10
OutputCopy
3
Note
In the second sample Fafa has 3 ways:

choose only 1 employee as a team leader with 9 employees under his responsibility.
choose 2 employees as team leaders with 4 employees under the responsibility of each of them.
choose 5 employees as team leaders with 1 employee under the responsibility of each of them.


*/