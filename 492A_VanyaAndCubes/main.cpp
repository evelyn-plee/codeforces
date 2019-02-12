#include<bits/stdc++.h>
using namespace std;
int sum = 0, cur = 0, i = 1, n;
int main(){
    cin >> n;
    while(sum < n){
        cur += i;
        sum += cur;
        if(sum > n){ cout << (i-1); return 0; }
        else if(sum == n){ cout << i; return 0; }
        i++;
    }
}