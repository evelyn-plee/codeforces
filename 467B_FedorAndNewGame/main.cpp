#include <bits/stdc++.h>
using namespace std;

int a[10005];

int main(){
    int n, m, k, ans = 0;
    cin >> n >> m >> k;
    for(int i = 0; i < m + 1; i++) cin >> a[i];
    for(int i = 0; i < m; i++){
        if(__builtin_popcount(a[i] ^ a[m]) <= k) ans++;
    } 
    cout << ans;
    return 0;
}
