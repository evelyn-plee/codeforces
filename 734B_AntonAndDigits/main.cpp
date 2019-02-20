#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d, m, sum = 0;
    cin >> a >> b >> c >> d;
    m = min(a, min(c, d));
    sum = (256 * m) + (32 * min(a-m, b));
    cout << sum;
    return 0;
}
