#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0;
        for (int d = 1; d <= 9;d++){
            long long ordinary = d;
            while(n>=ordinary){
                count++;
                ordinary = ordinary * 10 + d;
            }
        }
            cout << count << endl;
    }
    return 0;
}
/*
Let's call a positive integer n
 ordinary if in the decimal notation all its digits are the same. For example, 1
, 2
 and 99
 are ordinary numbers, but 719
 and 2021
 are not ordinary numbers.

For a given number n
, find the number of ordinary numbers among the numbers from 1
 to n
.

Input
The first line contains one integer t
 (1≤t≤104
). Then t
 test cases follow.

Each test case is characterized by one integer n
 (1≤n≤109
).

Output
For each test case output the number of ordinary numbers among numbers from 1
 to n
.

Example
InputCopy
6
1
2
3
4
5
100
OutputCopy
1
2
3
4
5
18


*/