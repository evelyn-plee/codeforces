#include <bits/stdc++.h>

using namespace std;

int main(){
    char x, c; string s;
    s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> x;
    while(cin >> c){
        cout << s[s.find(c) - (x =='R') + (x == 'L')];
    }
    return 0;
}
