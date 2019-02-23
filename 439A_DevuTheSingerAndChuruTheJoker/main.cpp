#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d, t = 0;
    cin >> n >> d;
    for(int i = 0; i < n; i++){ cin >> t; d -= t; }
    cout << ( d >= (n-1) * 10 ? d/5 : -1 );
    return 0;
}
