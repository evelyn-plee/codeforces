#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    char k;
    int ans = 0;
    while(n--){
        cin >> k;
        ans += k == '1' ? 1 : -1;
    }
    cout << (ans < 0 ? -ans : ans);
    return 0;
}