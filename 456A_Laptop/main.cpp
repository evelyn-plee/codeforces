#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x >> y;
        if(x != y){ cout << "Happy Alex"; return 0; }
    }
    cout << "Poor Alex";
    return 0;
}
