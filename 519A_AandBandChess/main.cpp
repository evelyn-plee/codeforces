#include <bits/stdc++.h>
using namespace std;

unordered_map<char,int> M;
int main(){
    M['Q']=9,M['R']=5,M['B']=3,M['N']=3,M['P']=1;
    char x;
    int b=0,w=0;
    for(int i=0;i<64;++i){
        cin>>x;
        if(islower(x)){ b += M[toupper(x)]; }
        else if(isupper(x)){ w += M[x]; }
    }
    cout << (b==w ? "Draw" : b>w ? "Black" : "White");
    return 0;
}
