#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, n = 0;
    cin >> n;
    while(n--){
        cin >> x;
        if(x == 1){ cout << "HARD"; return 0; }
    }
    cout << "EASY";
    return 0;
}
