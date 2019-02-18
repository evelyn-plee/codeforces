// Using BFS

#include <bits/stdc++.h>
using namespace std;

int vis[20010];
struct node{ int x, step; };

int main(){
    int n, m;
    cin >> n >> m;
    if(n >= m){
        cout << (n-m);
        return 0;
    }
    queue<node> q;
    node s; s.x = n; s.step = 0;
    q.push(s);
    while(!q.empty()){
        node tmp = q.front();
        q.pop();
        if(tmp.x == m){
            cout << tmp.step;
            return 0;
        }
        int lx = tmp.x * 2;
        int rx = tmp.x - 1;
        node n; n.step = tmp.step + 1;
        if(lx > 0 && lx < m * 2 && !vis[lx]){
            n.x = lx;
            vis[n.x] = 1;
            q.push(n);
        }
        if(rx > 0 && rx < m * 2 && !vis[rx]){
            n.x = rx;
            vis[n.x] = 1;
            q.push(n);
        }
    }
    return 0;
}

// Using greedy
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m, ans = 0;
    cin >> n >> m;
    while(n < m){
        m % 2 ? m++ : m /= 2, ans++;
    }
    cout << ans + (n-m);
    return 0;
}
