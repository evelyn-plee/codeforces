#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string x;
    bool found = false;
    vector<string> ans;
    for(int i = 0; i < n; i++){
        cin >> x;
        if(x[0] == 'O' && x[1] == 'O' && !found){
            x[0] = x[1] = '+';
            found = true;
        }else if(x[3] == 'O' && x[4] == 'O' && !found){
            x[3] = x[4] = '+';
            found = true;
        }
        ans.push_back(x);
    }
    if(!found){
        cout << "NO";
    }else{
        cout << "YES" << endl;
        for(string a : ans) cout << a << endl;
    }
    return 0;
}