#include<bits/stdc++.h>
using namespace std;
int n, t, a = 1;
int main(){
    cin >> n >> t;
    if(n == 1 && t == 10) cout << -1 << endl;
    else{
        cout << t;
        if(t == 10) a++;
        for(a; a <n; a++) cout << 0;
    }
}