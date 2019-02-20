#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, i, m, sum = 0;
    int x[100005];
    cin >> n;
    for(; i < n; i++) cin >> x[i];
    sort(x, x + n);
    cin >> m;
    while(m--){
        cin >> i;
        cout << upper_bound(x, x+n, i) - x << endl;
    }
    return 0;
}


