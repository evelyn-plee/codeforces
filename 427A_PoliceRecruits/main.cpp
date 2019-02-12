#include<bits/stdc++.h>
using namespace std;
long long n; int x, p = 0, cnt = 0;
int main(){
    cin >> n;
    while(n--){
        cin >> x;
        if(x == -1 & p == 0) cnt++;
        else if(x == -1 && p > 0){ p += x; }
        else if(x > -1) p += x;
    }
    cout << cnt << endl;
    return 0;
}