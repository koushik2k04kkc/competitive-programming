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
    ll n, s;
    cin >> n >> s;
    vi a(n);
    ll sum = 0;
    fl(i, n) {
        cin >> a[i];
        sum += a[i];
    }
    if(sum>s){
        ll l = 0, cnt = 0, ans = -1;
        for (ll r = 0; r < n;r++){
            cnt += a[r];
            while(cnt>s) cnt -= a[l++];
            if(cnt==s) ans = max(ans, r - l + 1);
        }
        cout << n - ans << nl;
    }
    else if(sum==s){
        cout << 0 << nl;
        return;
    } else{
        cout << -1 << nl;
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
Slavic has an array of length n
 consisting only of zeroes and ones. In one operation, he removes either the first or the last element of the array.

What is the minimum number of operations Slavic has to perform such that the total sum of the array is equal to s
 after performing all the operations? In case the sum s
 can't be obtained after any amount of operations, you should output -1.

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases.

The first line of each test case contains two integers n
 and s
 (1≤n,s≤2⋅105
) — the length of the array and the needed sum of elements.

The second line of each test case contains n
 integers ai
 (0≤ai≤1
) — the elements of the array.

It is guaranteed that the sum of n
 over all test cases doesn't exceed 2⋅105
.

Output
For each test case, output a single integer — the minimum amount of operations required to have the total sum of the array equal to s
, or -1 if obtaining an array with sum s
 isn't possible.

Example
InputCopy
7
3 1
1 0 0
3 1
1 1 0
9 3
0 1 0 1 1 1 0 0 1
6 4
1 1 1 1 1 1
5 1
0 0 1 1 0
16 2
1 1 0 0 1 0 0 1 1 0 0 0 0 0 1 1
6 3
1 0 1 0 0 0
OutputCopy
0
1
3
2
2
7
-1
Note
In the first test case, the sum of the whole array is 1
 from the beginning, so we don't have to make any operations.

In the second test case, the sum of the array is 2
 and we want it to be equal to 1
, so we should remove the first element. The array turns into [1,0]
, which has a sum equal to 1
.

In the third test case, the sum of the array is 5
 and we need it to be 3
. We can obtain such a sum by removing the first two elements and the last element, doing a total of three operations. The array turns into [0,1,1,1,0,0]
, which has a sum equal to 3
.



*/