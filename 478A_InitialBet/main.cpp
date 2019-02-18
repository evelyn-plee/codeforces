#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, c = 0;
    while(cin >> x){
        c += x;
    }
    cout << (!(c%5) && c ? c/5 : -1);
    return 0;
}
