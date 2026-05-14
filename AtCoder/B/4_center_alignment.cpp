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
    vector<string> s(n);
    int m = 0;
    fl(i,n){
        cin >> s[i];
        m = max(m, (int)s[i].size());
    }
    fl(i,n){
        int l = s[i].size();
        int k = (m - l) / 2;
        string dots(k, '.');
        cout << dots << s[i] << dots << nl;
    }
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
Problem Statement
You are given
N strings
S
1
​
 ,S
2
​
 ,…,S
N
​
  of odd lengths consisting of lowercase English letters.

Let
m be the length of the longest string among
S
1
​
 ,S
2
​
 ,…,S
N
​
 . Find strings
T
1
​
 ,T
2
​
 ,…,T
N
​
  satisfying the following condition.

Condition:
T
i
​
  is a string of length
m formed by concatenating
k copies of .,
S
i
​
 , and
k copies of . in this order, for some non-negative integer
k.
Constraints
N is an integer between
1 and
100, inclusive.
S
i
​
  is a string of odd length between
1 and
99, inclusive, consisting of lowercase English letters.
Input
The input is given from Standard Input in the following format:

N
S
1
​

S
2
​

⋮
S
N
​

Output
Output
N lines. The
i-th line
(1≤i≤N) should contain
T
i
​
 .

Sample Input 1
Copy
4
apple
blueberry
coconut
dragonfruit
Sample Output 1
Copy
...apple...
.blueberry.
..coconut..
dragonfruit
m=11, and
T
1
​
 ,T
2
​
 ,T
3
​
 ,T
4
​
  satisfy the condition in the problem statement for
k=3,1,2,0, respectively.

Sample Input 2
Copy
6
abc
d
efghi
jkl
mnopq
r
Sample Output 2
Copy
.abc.
..d..
efghi
.jkl.
mnopq
..r..

*/