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
#define eb(v) v.end(), v.begin()

typedef unsigned long long int ull;
typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef pair<char, ll> pcll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;
typedef unordered_set<ll> usll;
typedef unordered_set<char> usc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n;
    cin >> n;
    vi a(n);
    fl(i, n) cin >> a[i];
    int i = 0, j = n - 1, left = 0, right = 0, ans = 0;
    while(i<=j){
        if(left<right){
            left += a[i];
            if(left==right){
                ans = max(ans, i + 1 + n - j - 1);
            }
            i++;
        } else{
            right += a[j];
            if(right==left){
                ans = max(ans, i + 1 + n - j - 1);
            }
            j--;
        }
    }
    cout << ans nl;
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
There are n
 candies put from left to right on a table. The candies are numbered from left to right. The i
-th candy has weight wi
. Alice and Bob eat candies.

Alice can eat any number of candies from the left (she can't skip candies, she eats them in a row).

Bob can eat any number of candies from the right (he can't skip candies, he eats them in a row).

Of course, if Alice ate a candy, Bob can't eat it (and vice versa).

They want to be fair. Their goal is to eat the same total weight of candies. What is the most number of candies they can eat in total?

Input
The first line contains an integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains an integer n
 (1≤n≤2⋅105
) — the number of candies on the table.

The second line of each test case contains n
 integers w1,w2,…,wn
 (1≤wi≤104
) — the weights of candies from left to right.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, print a single integer — the maximum number of candies Alice and Bob can eat in total while satisfying the condition.

Example
InputCopy
4
3
10 20 10
6
2 1 4 2 4 1
5
1 2 4 8 16
9
7 3 20 5 15 1 11 8 10
OutputCopy
2
6
0
7
Note
For the first test case, Alice will eat one candy from the left and Bob will eat one candy from the right. There is no better way for them to eat the same total amount of weight. The answer is 2
 because they eat two candies in total.

For the second test case, Alice will eat the first three candies from the left (with total weight 7
) and Bob will eat the first three candies from the right (with total weight 7
). They cannot eat more candies since all the candies have been eaten, so the answer is 6
 (because they eat six candies in total).

For the third test case, there is no way Alice and Bob will eat the same non-zero weight so the answer is 0
.

For the fourth test case, Alice will eat candies with weights [7,3,20]
 and Bob will eat candies with weights [10,8,11,1]
, they each eat 30
 weight. There is no better partition so the answer is 7
.



*/