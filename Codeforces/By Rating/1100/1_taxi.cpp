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
    vi a(n);
    fl(i, n) cin >> a[i];
    int c1=0,c2=0,c3=0,c4=0;
    fl(i,n){
        if(a[i]==1) c1++;
        else if(a[i]==2) c2++;
        else if(a[i]==3) c3++;
        else c4++;
    }
    int ans = c4;
    if(c3>=c1){
        ans+=c3;
        c1=0;
    }
    else{
        ans+=c3;
        c1-=c3;
    }
    ans+=c2/2;
    c2%=2;
    if(c2==1){
        ans++;
        c1-=2;
    }
    if(c1>0){
        ans+=c1/4;
        if(c1%4!=0) ans++;
    }
    cout<<ans nl;
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
After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday. We know that the i-th group consists of si friends (1 ≤ si ≤ 4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?

Input
The first line contains integer n (1 ≤ n ≤ 105) — the number of groups of schoolchildren. The second line contains a sequence of integers s1, s2, ..., sn (1 ≤ si ≤ 4). The integers are separated by a space, si is the number of children in the i-th group.

Output
Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.

Examples
InputCopy
5
1 2 4 3 3
OutputCopy
4
InputCopy
8
2 3 4 4 2 1 3 1
OutputCopy
5
Note
In the first test we can sort the children into four cars like this:

the third group (consisting of four children),
the fourth group (consisting of three children),
the fifth group (consisting of three children),
the first and the second group (consisting of one and two children, correspondingly).
There are other ways to sort the groups into four cars.


*/