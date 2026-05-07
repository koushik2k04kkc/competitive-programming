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
    vector<int> v;
    cin >> n;
    int a[n];
    cin >> a[0];
    v.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < a[i - 1])
        {
            v.push_back(a[i]);
            v.push_back(a[i]);
        }
        else
        {
            v.push_back(a[i]);
        }
    }
    cout << v.size() << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
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
Tema and Vika are playing the following game.

First, Vika comes up with a sequence of positive integers a
 of length m
 and writes it down on a piece of paper. Then she takes a new piece of paper and writes down the sequence b
 according to the following rule:

First, she writes down a1
.
Then, she writes down only those ai
 (2≤i≤m
) such that ai−1≤ai
. Let the length of this sequence be denoted as n
.
For example, from the sequence a=[4,3,2,6,3,3]
, Vika will obtain the sequence b=[4,6,3]
.

She then gives the piece of paper with the sequence b
 to Tema. He, in turn, tries to guess the sequence a
.

Tema considers winning in such a game highly unlikely, but still wants to find at least one sequence a
 that could have been originally chosen by Vika. Help him and output any such sequence.

Note that the length of the sequence you output should not exceed the input sequence length by more than two times.

Input
Each test consists of multiple test cases. The first line of input data contains a single integer t
 (1≤t≤104
) — the number of test cases. This is followed by a description of the test cases.

The first line of each test case contains a single integer n
 (1≤n≤2⋅105
) — the length of the sequence b
.

The second line of each test case contains n
 integers b1,b2,b3,…,bn
 (1≤bi≤109
) — the elements of the sequence.

The sum of the values of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case, output two lines. In the first line, output a single integer m
 — the length of the sequence (n≤m≤2⋅n
). In the second line, output m
 integers a1,a2,a3,…,am
 (1≤ai≤109
) — the assumed sequence that Vika could have written on the first piece of paper.

If there are multiple suitable sequences, you can output any of them.

Example
InputCopy
6
3
4 6 3
3
1 2 3
5
1 7 9 5 7
1
144
2
1 1
5
1 2 2 1 1
OutputCopy
6
4 3 2 6 3 3
3
1 2 3
6
1 7 9 3 5 7
1
144
2
1 1
6
1 2 2 1 1 1
Note
The first sample is explained in the problem statement.

In the second sample, Vika could have chosen the original sequence.
*/