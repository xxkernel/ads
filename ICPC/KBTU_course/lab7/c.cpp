// #include <bits/stdc++.h>
// using ll = long long;
// #define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
// using namespace std;

// int n, m;
// const int mxN = 1e5;
// vector<int>v[mxN], g[mxN];
// int vis[mxN];
// vector<int>ts, bg;

// void dfs(int t){
//     vis[t] = 1;
//     for(auto to:v[t]){
//         if(!vis[to]){
//             dfs(to);
//         }
//     }
//     ts.push_back(t);
// }

// void dfs1(int t){
//     vis[t] = 0;
//     for(auto to:g[t]){
//         if(vis[to]){
//             dfs1(to);
//         }
//     }
//     bg.push_back(t);
// }

// void solve(){
//     cin>>n>>m;
//     while(m--){
//         int x, y;
//         cin>>x>>y;
//         x--;
//         y--;
//         v[x].push_back(y);
//         g[y].push_back(x);
//     }
//     for(int i = 0;i<n;i++){
//         if(!vis[i]){
//             dfs(i);
//         }
//     }
//     int cnt = 0;
//     for(int i = 0;i<n;i++){
//         dfs1(i);
//         memset(vis, 1, sizeof(vis));
//         if(bg.size()==n){
//             cnt++;
//         }
//         bg.clear();
//     }
//     cout<<cnt;
// }

// int main(){
//     go
//     solve();
// }


#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

vector<vector<int>> g, gr;
vector<int> used, top, color;

void dfs1(int v) {
    used[v] = 1;
    for(int i = 0; i < g[v].size(); i++) {
        int to = g[v][i];
        if (!used[to]) {
            dfs1(to);
        }
    }
    top.push_back(v);
}

void dfs2(int v, int c) {
    color[v] = c;
    for(int i = 0; i < gr[v].size(); i++) {
        int to = gr[v][i];
        if (color[to] == -1) {
            dfs2(to, c);
        }
    }
}


void solve(){
    int n, m, a, b, cnt;
    cin >> n >> m;
    g.resize(n + 1);
    gr.resize(n + 1);
    cnt = 0;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        g[a].push_back(b);
        gr[b].push_back(a);
    }
    used.resize(n + 1);
    for(int i = 1; i <= n; i++) {
        if (!used[i]) {
            dfs1(i);
        }
    }
    color.assign(n + 1, -1);
    int c = 0;
    for(int i = 1; i <= n; i++) {
        int v = top[n - i];
        if (color[v] == -1) {
            dfs2(v, c++);
        }
    }

    used.assign(c, 1);
    for(int i = 1; i < g.size(); i++) {
        for(int j = 0; j < g[i].size(); j++) {
            int to = g[i][j];
            if (color[i] != color[to]) {
                used[color[to]] = 0;
            }
        }
    }

    c = 0;
    for(int i = 0; i < used.size(); i++) {
        if (used[i]) {
            c++;
        }
    }

    cout << c << endl;
}

int main(){
    go
    solve();
}