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
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int one =0,zero=0;
    for(auto x : s){
        if(x=='1') one++;
        else zero++;
    }
    cout << abs(zero-one);
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
Andrewid the Android is a galaxy-famous detective. In his free time he likes to think about strings containing zeros and ones.

Once he thought about a string of length n consisting of zeroes and ones. Consider the following operation: we choose any two adjacent positions in the string, and if one them contains 0, and the other contains 1, then we are allowed to remove these two digits from the string, obtaining a string of length n - 2 as a result.

Now Andreid thinks about what is the minimum length of the string that can remain after applying the described operation several times (possibly, zero)? Help him to calculate this number.
Input

First line of the input contains a single integer n (1 ≤ n ≤ 2·105), the length of the string that Andreid has.

The second line contains the string of length n consisting only from zeros and ones.
Output

Output the minimum length of the string that may remain after applying the described operations several times.
Examples
Input
Copy

4
1100

Output
Copy

0

Input
Copy

5
01010

Output
Copy

1

Input
Copy

8
11101111

Output
Copy

6

Note

In the first sample test it is possible to change the string like the following: .

In the second sample test it is possible to change the string like the following: .

In the third sample test it is possible to change the string like the following: .
*/