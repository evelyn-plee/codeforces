#include <bits/stdc++.h>
using namespace std;

long long  a[500005],n,ans,x;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] = a[i-1] + a[i];
    }
    for(int i = 0; i < n-1; i++){
        if(a[i]*3 == a[n-1]*2) ans += x; //found 2/3
        if(a[i]*3 == a[n-1]) x++; // found 1/3
    }
    cout << ans;
    return 0;
}
