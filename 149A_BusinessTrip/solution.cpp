#include <bits/stdc++.h>
using namespace std;

int arr[12];

int main(){
    int k, sum, i = 0;
    cin >> k;
    for(i = 0; i < 12; i++){ cin >> arr[i]; }
    sort(arr, arr+12);
    for(i = 11; i >= 0 && k > 0; i--){
        k = k - arr[i];
    }
    if(k > 0) cout << -1;
    else cout << 11-i;
    return 0;
}
