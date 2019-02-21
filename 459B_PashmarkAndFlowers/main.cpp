#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, i, k, l = 0; 
    long long a[200001];
    cin >> n;
    for(i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    k = count(a, a+n, a[0]);
    l = count(a, a+n, a[n-1]);
    if(a[0] == a[n-1]) k = n * (n-1) /2;
    else k = k * l;
    cout << a[n-1] - a[0] << " " << k;
    return 0;
}
