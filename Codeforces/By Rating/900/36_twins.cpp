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
    int n;
    cin >> n;
    vi a(n);
    int sum = 0;
    fl(i,n){
        cin >> a[i];
        sum += a[i];
    }
    sort(a.rbegin(), a.rend());
    int k = 0;
    int cnt = 0;
    fl(i,n){
        k += a[i];
        cnt++;
        if(k>sum/2){
            break;
        }
    }
    cout << cnt nl;
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
Imagine that you have a twin brother or sister. Having another person that looks exactly like you seems very unusual. It's hard to say if having something of an alter ego is good or bad. And if you do have a twin, then you very well know what it's like.

Now let's imagine a typical morning in your family. You haven't woken up yet, and Mom is already going to work. She has been so hasty that she has nearly forgotten to leave the two of her darling children some money to buy lunches in the school cafeteria. She fished in the purse and found some number of coins, or to be exact, n coins of arbitrary values a1, a2, ..., an. But as Mom was running out of time, she didn't split the coins for you two. So she scribbled a note asking you to split the money equally.

As you woke up, you found Mom's coins and read her note. "But why split the money equally?" — you thought. After all, your twin is sleeping and he won't know anything. So you decided to act like that: pick for yourself some subset of coins so that the sum of values of your coins is strictly larger than the sum of values of the remaining coins that your twin will have. However, you correctly thought that if you take too many coins, the twin will suspect the deception. So, you've decided to stick to the following strategy to avoid suspicions: you take the minimum number of coins, whose sum of values is strictly more than the sum of values of the remaining coins. On this basis, determine what minimum number of coins you need to take to divide them in the described manner.

Input
The first line contains integer n (1 ≤ n ≤ 100) — the number of coins. The second line contains a sequence of n integers a1, a2, ..., an (1 ≤ ai ≤ 100) — the coins' values. All numbers are separated with spaces.

Output
In the single line print the single number — the minimum needed number of coins.

Examples
InputCopy
2
3 3
OutputCopy
2
InputCopy
3
2 1 2
OutputCopy
2
Note
In the first sample you will have to take 2 coins (you and your twin have sums equal to 6, 0 correspondingly). If you take 1 coin, you get sums 3, 3. If you take 0 coins, you get sums 0, 6. Those variants do not satisfy you as your sum should be strictly more that your twins' sum.

In the second sample one coin isn't enough for us, too. You can pick coins with values 1, 2 or 2, 2. In any case, the minimum number of coins equals 2.


*/