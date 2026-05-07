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
#define be(v) v.begin(), v.end()
#define eb(v) v.end(), v.begin()

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
    int n;
    cin >> n;
    int cnt25 = 0, cnt50 = 0;
    fl(i,n){
        int x;
        cin >> x;
        if(x==25){
            cnt25++;
        }
        else if (x==50){
            if(cnt25>=1){
                cnt25--;
                cnt50++;
            } else {
                pn;
                return;
            }
        }
        else if(x==100){
            if(cnt25>=1 && cnt50>=1){
                cnt25--;
                cnt50--;
            }
            else if(cnt25>=3){
                cnt25 -= 3;
            } else{
                pn;
                return;
            }
        }
    }
    py;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    // ll t;
    // cin >> t;
    // while(t--){
    //     solve();
    // }
    solve();
    return 0;
}
/*
The new "Die Hard" movie has just been released! There are n people at the cinema box office standing in a huge line. Each of them has a single 100, 50 or 25 ruble bill. A "Die Hard" ticket costs 25 rubles. Can the booking clerk sell a ticket to each person and give the change if he initially has no money and sells the tickets strictly in the order people follow in the line?

Input
The first line contains integer n (1 ≤ n ≤ 105) — the number of people in the line. The next line contains n integers, each of them equals 25, 50 or 100 — the values of the bills the people have. The numbers are given in the order from the beginning of the line (at the box office) to the end of the line.

Output
Print "YES" (without the quotes) if the booking clerk can sell a ticket to each person and give the change. Otherwise print "NO".

Examples
InputCopy
4
25 25 50 50
OutputCopy
YES
InputCopy
2
25 100
OutputCopy
NO
InputCopy
4
50 50 25 25
OutputCopy
NO

*/