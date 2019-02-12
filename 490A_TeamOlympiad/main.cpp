#include<bits/stdc++.h>
using namespace std;
int x[3], team[3][5001], n, t;
int main(){
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> t;
        team[t-1][x[t-1]++] = i;
    }
    int mn = min(x[0], min(x[1], x[2]));
    cout << mn << endl;
    for(int i = 0; i < mn; ++i){
        cout << team[0][i] << " " << team[1][i] << " " << team[2][i] << endl;
    }
    return 0;
}