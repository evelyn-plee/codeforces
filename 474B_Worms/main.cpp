#include <bits/stdc++.h>
using namespace std;

int n = 0;
int arr[1000003];
int v[1000003];

// Using binary search

int binarySearch(int k){
    int low = 1, high = n, mid = 0;
    
    while(low < high){
        mid = (low + high) / 2;
        if(k <= v[mid]) high = mid;
        else low = mid + 1;
    }
    return high;
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        v[i] = v[i-1] + arr[i];
    }
    int m, k = 0;
    cin >> m;
    for(int i = 1; i <= m; i++){
        cin >> k;
        cout << binarySearch(k) << endl;
    }
    return 0;
}


// implementation
int arr[1000003];

int main(){
    int n, m, x = 0; int s = 1;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        while(x--){
            arr[s] = i;
            s++;
        }
    }
    cin >> m;
    while(m--){
        cin >> x;
        cout << arr[x] << endl;
    }
    return 0;
}
