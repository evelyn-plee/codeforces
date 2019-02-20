#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y, sum = 0; int m = 200;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x >> y;
        m = min(m, y);
        sum += (x * m);
    }
    cout << sum;
    return 0;
}
