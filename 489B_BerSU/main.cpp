#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    cin >> m;
    int b[m];
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(b, b+m);
    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(abs(a[i] - b[j]) < 2){
                ans++;
                b[j] = -1;
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}