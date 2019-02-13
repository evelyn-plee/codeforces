#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum = 0;
    string a, b;
    cin >> n >> a >> b;
    for(int i = 0; i < n; i++){
        sum += min((a[i]-b[i]+10)%10, (b[i]-a[i]+10)%10);
    }
    cout << sum;
    return 0;
}