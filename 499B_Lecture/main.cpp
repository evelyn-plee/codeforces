#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string, string> mp;
    int n, m = 0;
    string x, y;
    cin >> n >> m;
    while(m--){
        cin >> x >> y;
        mp[x] = mp[y] = x.size() <= y.size() ? x : y;
    }
    while(n--){
        cin >> x;
        cout << mp[x] << " ";
    }
    return 0;
}
