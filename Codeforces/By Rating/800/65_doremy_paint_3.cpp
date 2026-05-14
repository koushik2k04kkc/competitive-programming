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

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> m;
    set<int> s;
    fl(i,n)
    {
        cin >> a[i];
        m[a[i]]++;
        s.insert(a[i]);
    }
    if (s.size() > 2)
    {
        pn;
        return;
    }
    else if (s.size() == 1)
    {
        py;
        return;
    }
    else
    {
        for (auto k : m)
        {
            if (k.second == ceil(n / 2))
            {
                py;
                return;
            }
        }
        pn;
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
/*
An array b1,b2,…,bn
 of positive integers is good if all the sums of two adjacent elements are equal to the same value. More formally, the array is good if there exists a k
 such that b1+b2=b2+b3=…=bn−1+bn=k
.

Doremy has an array a
 of length n
. Now Doremy can permute its elements (change their order) however she wants. Determine if she can make the array good.

Input
The input consists of multiple test cases. The first line contains a single integer t
 (1≤t≤100
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer n
 (2≤n≤100
) — the length of the array a
.

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤105
).

There are no constraints on the sum of n
 over all test cases.

Output
For each test case, print "Yes" (without quotes), if it is possible to make the array good, and "No" (without quotes) otherwise.

You can output the answer in any case (upper or lower). For example, the strings "yEs", "yes", "Yes", and "YES" will be recognized as positive responses.

Example
InputCopy
5
2
8 9
3
1 1 2
4
1 1 4 5
5
2 3 3 3 3
4
100000 100000 100000 100000
OutputCopy
Yes
Yes
No
No
Yes
Note
In the first test case, [8,9]
 and [9,8]
 are good.

In the second test case, [1,2,1]
 is good because a1+a2=a2+a3=3
.

In the third test case, it can be shown that no permutation is good.



*/