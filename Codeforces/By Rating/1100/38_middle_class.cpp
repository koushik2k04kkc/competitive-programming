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
    int n, x;
    cin >> n >> x;
    vi a(n);
    fl(i, n) cin >> a[i];
    sort(eb(a));
    ll sum = 0,cnt=0;
    fl(i,n){
        sum += a[i];
        if(sum>=x*(cnt+1)){
            cnt++;
        } else{
            break;
        }
    }
    cout << cnt nl;
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
Many years ago Berland was a small country where only n
 people lived. Each person had some savings: the i
-th one had ai
 burles.

The government considered a person as wealthy if he had at least x
 burles. To increase the number of wealthy people Berland decided to carry out several reforms. Each reform looked like that:

the government chooses some subset of people (maybe all of them);
the government takes all savings from the chosen people and redistributes the savings among the chosen people equally.
For example, consider the savings as list [5,1,2,1]
: if the government chose the 1
-st and the 3
-rd persons then it, at first, will take all 5+2=7
 burles and after that will return 3.5
 burles to the chosen people. As a result, the savings will become [3.5,1,3.5,1]
.

A lot of data was lost from that time, so we don't know how many reforms were implemented and to whom. All we can do is ask you to calculate the maximum possible number of wealthy people after several (maybe zero) reforms.

Input
The first line contains single integer T
 (1≤T≤1000
) — the number of test cases.

Next 2T
 lines contain the test cases — two lines per test case. The first line contains two integers n
 and x
 (1≤n≤105
, 1≤x≤109
) — the number of people and the minimum amount of money to be considered as wealthy.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — the initial savings of each person.

It's guaranteed that the total sum of n
 doesn't exceed 105
.

Output
Print T
 integers — one per test case. For each test case print the maximum possible number of wealthy people after several (maybe zero) reforms.

Example
InputCopy
4
4 3
5 1 2 1
4 10
11 9 11 9
2 5
4 3
3 7
9 4 9
OutputCopy
2
4
0
3
Note
The first test case is described in the statement.

In the second test case, the government, for example, could carry out two reforms: [11–––,9–,11,9]→[10,10,11–––,9–]→[10,10,10,10]
.

In the third test case, the government couldn't make even one person wealthy.

In the fourth test case, the government could choose all people to carry out a reform: [9–,4–,9–]→[713,713,713]
.



*/