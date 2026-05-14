#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

typedef unsigned long long int ull;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pi;
typedef pair<char, ll> pci;
typedef vector<pi> vii;
typedef map<ll, ll> mi;
typedef map<char, ll> mci;
typedef set<ll> seti;
typedef set<char> setc;
typedef unordered_set<ll> useti;
typedef unordered_set<char> usetc;

// Koushik Kumar Chakraborty (●'◡'●)

void solve()
{
    int n;
    cin >> n;
    bool valid = false;
    vector<int> arr(n);
    cin >> arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] != arr[i - 1])
        {
            valid = true;
        }
    }
    if (!valid)
    {
        cout << "NO\n";
    }
    else
    {
        sort(arr.begin(), arr.end());

        if (arr[n - 2] == arr[n - 1])
        {
            swap(arr[0], arr[n - 1]);
        }
        cout << "YES\n";
        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout nl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
/*
An array a
 is called ugly if it contains at least one element which is equal to the sum of all elements before it. If the array is not ugly, it is beautiful.

For example:

the array [6,3,9,6]
 is ugly: the element 9
 is equal to 6+3
;
the array [5,5,7]
 is ugly: the element 5
 (the second one) is equal to 5
;
the array [8,4,10,14]
 is beautiful: 8≠0
, 4≠8
, 10≠8+4
, 14≠8+4+10
, so there is no element which is equal to the sum of all elements before it.
You are given an array a
 such that 1≤a1≤a2≤⋯≤an≤100
. You have to reorder the elements of a
 in such a way that the resulting array is beautiful. Note that you are not allowed to insert new elements or erase existing ones, you can only change the order of elements of a
. You are allowed to keep the array a
 unchanged, if it is beautiful.

Input
The first line contains one integer t
 (1≤t≤2000
) — the number of test cases.

Each test case consists of two lines. The first line contains one integer n
 (2≤n≤50
). The second line contains n
 integers a1,a2,…,an
 (1≤a1≤a2≤⋯≤an≤100
).

Output
For each test case, print the answer as follows:

if it is impossible to reorder the elements of a
 in such a way that it becomes beautiful, print NO;
otherwise, in the first line, print YES. In the second line, print n
 integers — any beautiful array which can be obtained from a
 by reordering its elements. If there are multiple such arrays, print any of them.
Example
InputCopy
4
4
3 3 6 6
2
10 10
5
1 2 3 4 5
3
1 4 4
OutputCopy
YES
3 6 3 6
NO
YES
2 4 1 5 3
YES
1 4 4


*/