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
typedef map<ll, ll> mll;
typedef map<char, ll> mcll;
typedef set<ll> sll;
typedef set<char> sc;
typedef unordered_set<ll> usll;
typedef unordered_set<char> usc;

/* KOUSHIK KUMAR CHAKRABORTY (●'◡'●) */

void solve()
{
    string s, t;
    cin >> s >> t;
    vector<int> frq(26, 0);
    for (char ch : t)
    {
        frq[ch - 'A']++;
    }
    string target = "";
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (frq[s[i] - 'A'] > 0)
        {
            target += s[i];
            frq[s[i] - 'A']--;
        }
    }
    reverse(target.begin(), target.end());
    cout << (target == t ? "YES\n" : "NO\n");
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
Daisy loves playing games with words. Recently, she has been playing the following Deletive Editing word game with Daniel.

Daisy picks a word, for example, "DETERMINED". On each game turn, Daniel calls out a letter, for example, 'E', and Daisy removes the first occurrence of this letter from the word, getting "DTERMINED". On the next turn, Daniel calls out a letter again, for example, 'D', and Daisy removes its first occurrence, getting "TERMINED". They continue with 'I', getting "TERMNED", with 'N', getting "TERMED", and with 'D', getting "TERME". Now, if Daniel calls out the letter 'E', Daisy gets "TRME", but there is no way she can get the word "TERM" if they start playing with the word "DETERMINED".

Daisy is curious if she can get the final word of her choice, starting from the given initial word, by playing this game for zero or more turns. Your task it help her to figure this out.

Input
The first line of the input contains an integer n
 — the number of test cases (1≤n≤10000
). The following n
 lines contain test cases.

Each test case consists of two words s
 and t
 separated by a space. Each word consists of at least one and at most 30 uppercase English letters; s
 is the Daisy's initial word for the game; t
 is the final word that Daisy would like to get at the end of the game.

Output
Output n
 lines to the output — a single line for each test case. Output "YES" if it is possible for Daisy to get from the initial word s
 to the final word t
 by playing the Deletive Editing game. Output "NO" otherwise.

Example
InputCopy
6
DETERMINED TRME
DETERMINED TERM
PSEUDOPSEUDOHYPOPARATHYROIDISM PEPA
DEINSTITUTIONALIZATION DONATION
CONTEST CODE
SOLUTION SOLUTION
OutputCopy
YES
NO
NO
YES
NO
YES


*/