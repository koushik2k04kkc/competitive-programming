#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
typedef vector<ll> vi;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

int dist(int n){
    string s = to_string(n);
    set<char> str(all(s));
    return s.size() == str.size();
}

void solve()
{
    int n;
    cin >> n;
    while(1){
        n++;
        if(dist(n)){
            cout << n nl;
            break;
        }
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
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The 
year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, 
find the minimum year number which is strictly larger than the given one and
 has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than
 y and all it's digits are distinct. It is guaranteed that the answer exists.

Examples
InputCopy
1987
OutputCopy
2013
InputCopy
2013
OutputCopy
2014
*/