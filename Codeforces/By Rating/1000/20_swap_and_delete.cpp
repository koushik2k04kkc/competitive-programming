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
    int t;
    cin>> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        ll zero = 0, one = 0;
        for (char cc : s)
            if (cc == '0')
                zero++;
            else
                one++;
        ll rz = 0, ro = 0;
        ll result = 0;
        fl(i,n)
        {
            if (s[i] == '0')
                rz++;
            else
                ro++;
            if (rz > one || ro > zero)
            {
                result = n - i;
                break;
            }
        }
        cout << result nl;
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
You are given a binary string s
 (a string consisting only of 0-s and 1-s).

You can perform two types of operations on s
:

delete one character from s
. This operation costs 1
 coin;
swap any pair of characters in s
. This operation is free (costs 0
 coins).
You can perform these operations any number of times and in any order.

Let's name a string you've got after performing operations above as t
. The string t
 is good if for each i
 from 1
 to |t|
 ti≠si
 (|t|
 is the length of the string t
). The empty string is always good. Note that you are comparing the resulting string t
 with the initial string s
.

What is the minimum total cost to make the string t
 good?

Input
The first line contains a single integer t
 (1≤t≤104
) — the number of test cases. Then t
 test cases follow.

The only line of each test case contains a binary string s
 (1≤|s|≤2⋅105
; si∈{
0, 1}
) — the initial string, consisting of characters 0 and/or 1.

Additional constraint on the input: the total length of all strings s
 doesn't exceed 2⋅105
.

Output
For each test case, print one integer — the minimum total cost to make string t
 good.

Example
InputCopy
4
0
011
0101110001
111100
OutputCopy
1
1
0
4
Note
In the first test case, you have to delete a character from s
 to get the empty string t
. Only then t
 becomes good. One deletion costs 1
 coin.

In the second test case, you can, for example, delete the second character from s
 to get the string 01, and then swap the first and second characters to get the string t
 =
 10. String t
 is good, since t1≠s1
 and t2≠s2
. The total cost is 1
 coin.

In the third test case, you can, for example, swap s1
 with s2
, swap s3
 with s4
, swap s5
 with s7
, s6
 with s8
 and s9
 with s10
. You'll get t
 =
 1010001110. All swap operations are free, so the total cost is 0
.



*/