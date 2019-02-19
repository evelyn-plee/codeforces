#include <bits/stdc++.h>
using namespace std;

int main(){
    int a1, a2, a3, b1, b2, b3, n, total = 0;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    total = (a1 + a2 + a3 + 4)/5 + (b1 + b2 + b3 + 9)/10;
    cout << (n >= total ? "YES" : "NO");
    return 0;
}
