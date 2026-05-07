#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> a(n-1);
    for (int i = 0; i < n - 1;i++)
        cin >> a[i];
    long long total =(long long) n * (n + 1) / 2;
    long long sum = 0;
    for (int i = 0; i < n-1;i++){
        sum += a[i];
    }
    cout << total - sum;
    return 0;
}