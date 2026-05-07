#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        unordered_map<int, long long> count_map;
        long long result = 0;

        for (int i = 0; i < n; ++i)
        {
            int key = a[i] - i;
            if (count_map.find(key) != count_map.end())
            {
                result += count_map[key];
            }
            count_map[key]++;
        }

        cout << result << endl;
    }
    return 0;
}
/*
memory limit per test256 megabytes
You are given an array a
 of n
 integers. Count the number of pairs of indices (i,j)
 such that i<j
 and aj−ai=j−i
.

Input
The first line contains one integer t
 (1≤t≤104
). Then t
 test cases follow.

The first line of each test case contains one integer n
 (1≤n≤2⋅105
).

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤n
) — array a
.

It is guaranteed that the sum of n
 over all test cases does not exceed 2⋅105
.

Output
For each test case output the number of pairs of indices (i,j)
 such that i<j
 and aj−ai=j−i
.

Example
InputCopy
4
6
3 5 1 4 6 6
3
1 2 3
4
1 3 3 4
6
1 6 3 4 5 6
OutputCopy
1
3
3
10


*/