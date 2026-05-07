#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long double
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rep(i, a, b) for (int i = a; i <= b; ++i)
#define per(i, a, b) for (int i = a; i >= b; --i)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define nl << "\n"
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

typedef vector<ll> vi;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    fl(i,n){
        int ans = s[i] - '0';
        if(ans%8==0){
            py;
            cout << ans;
            return;
        }
    }
    fl(i,n){
        for(int j=i+1;j<n;j++){
            int ans = (s[i] - '0') * 10 + (s[j] - '0');
            if(ans%8==0){
                py;
                cout << ans;
                return;
            }
        }
    }
    fl(i, n)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n;k++){
                int ans = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if (ans % 8 == 0)
                {
                    py;
                    cout << ans;
                    return;
                }
            }
        }
    }
    pn;
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
You are given a non-negative integer n, its decimal representation consists of at most 100 digits and doesn't contain leading zeroes.

Your task is to determine if it is possible in this case to remove some of the digits (possibly not remove any digit at all) so that the result contains at least one digit, forms a non-negative integer, doesn't have leading zeroes and is divisible by 8. After the removing, it is forbidden to rearrange the digits.

If a solution exists, you should print it.

Input
The single line of the input contains a non-negative integer n. The representation of number n doesn't contain any leading zeroes and its length doesn't exceed 100 digits.

Output
Print "NO" (without quotes), if there is no such way to remove some digits from number n.

Otherwise, print "YES" in the first line and the resulting number after removing digits from number n in the second line. The printed number must be divisible by 8.

If there are multiple possible answers, you may print any of them.

Examples
InputCopy
3454
OutputCopy
YES
344
InputCopy
10
OutputCopy
YES
0
InputCopy
111111
OutputCopy
NO

*/