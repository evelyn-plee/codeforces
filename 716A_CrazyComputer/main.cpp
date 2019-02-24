#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, c, t, pt, cnt = 0;
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        cin >> t;
        if(t - pt > c) cnt = 0;
        ++cnt;
        pt = t;
    }
    cout << cnt;
    return 0;
}
