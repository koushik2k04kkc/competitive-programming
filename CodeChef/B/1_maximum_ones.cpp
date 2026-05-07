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
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

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
    int n, k;
    cin >> n >> k;
    string S;
    cin >> S;
    int cnt = 0;
    for (char c : S)
        if (c == '1')
            cnt++;
    for (int i = n - 2; i >= 0 && k > 0; i--)
    {
        if (S[i] == '0' && S[i + 1] == '1')
        {
            S[i] = '1';
            cnt++;
            k--;
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
You are given a binary string
S
S of length
N
N consisting only of characters
0
0 and
1
1. You are allowed to perform at most
K
K operations on this string. In each operation, you can choose an index
i
i (where
0
≤
i
<
N
−
1
0≤i<N−1) and update the character at position
i
i as follows:

S
i
=
max
⁡
(
S
i
,
S
i
+
1
)
S
i
​
 =max(S
i
​
 ,S
i+1
​
 )
Here, the maximum is taken in the numerical sense, i.e.,
′
1
′
′
 1
′
  is considered greater than
′
0
′
′
 0
′
 . This operation essentially means that if
S
i
+
1
S
i+1
​
  is
′
1
′
′
 1
′
 , then
S
i
S
i
​
  becomes
′
1
′
′
 1
′
  regardless of its previous value.

Your task is to determine the maximum possible number of
1
1s in the string after performing at most
K
K such operations.

Input Format
The first line of input will contain a single integer
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two space-separated integers
N
N and
K
K.
The second line of each test case contains a binary string
S
S of length
N
N, consisting of the characters
0
0 and
1
1.
Output Format
For each test case, output on a new line the maximum number of
1
1s that can be achieved in the string after performing at most
K
K operations.

Constraints
1
≤
T
≤
1
0
5
1≤T≤10
5

1
≤
N
≤
10
1≤N≤10
0
≤
K
≤
N
0≤K≤N
S
i
∈
{
0
,
1
}
S
i
​
 ∈{0,1}
Sample 1:
Input
Output
3
3 1
101
3 1
001
3 2
001
3
2
3
Explanation:
Test Case 1: You can apply the operation at index
i
=
1
i=1 and the string changes to "111". Maximum possible ones = 3.
Test Case 2: You can apply the operation at index
i
=
1
i=1 and the string changes to "011". Maximum possible ones = 2.
Test Case 3: You can apply the operation at index
i
=
1
i=1 and the string changes to "011". The next operation will be applied at index
i
=
0
i=0 and the string changes to "111". Maximum possible ones = 3.
*/