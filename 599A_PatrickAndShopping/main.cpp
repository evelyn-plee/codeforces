#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c = 0;
    cin >> a >> b >> c;
    cout << ((a + b) < c ? 2 * (a + b) : (a + c) < b ? 2 * (a + c) : (b + c) < a ? 2 * (b + c) : a + b + c);
    return 0;
}
