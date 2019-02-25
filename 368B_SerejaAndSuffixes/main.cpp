#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
int dp[MAXN], vis[MAXN], a[MAXN];

int main(){
    int n, m, j = 0;
    cin >> n >> m;
    memset(dp, 0, sizeof(dp));
    memset(vis, 0, sizeof(vis));
    for(int i = 1; i <= n; i++) cin >> a[i] ;
    dp[n] = 1, vis[a[n]] = 1;
    for(int i = n-1; i >= 1; i--){
        if(!vis[a[i]]){
            dp[i] = dp[i+1] + 1;
            vis[a[i]] = 1;
        }else dp[i] = dp[i+1];
    } 
    for(int i = 0; i < m; i++){
        cin >> j;
        cout << dp[j] << endl;
    }
    return 0;
}
