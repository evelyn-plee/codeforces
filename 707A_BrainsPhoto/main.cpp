#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m = 0;
    cin >> n >> m;
    char x;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> x;
            if(x == 'C' || x == 'M' || x == 'Y'){
                cout << "#Color";
                return 0;
            }
        }
    }
    cout << "#Black&White";
    return 0;
}