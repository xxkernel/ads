#include <bits/stdc++.h>

using namespace std;
const int maxN = 2e5+1;

bool vis[maxN];
int N, t[maxN], in[maxN], ans[maxN];
vector<int> G[maxN];
queue<int> Q;

void dfs1(int u){
    for(int v : G[u]){
        if(!vis[v]){
            ans[v] = ans[u]+1;
            vis[v] = true;
            dfs1(v);
        }
    }
}

void dfs2(int u, int d = 1){
    vis[u] = true;
    int v = t[u];
    if(vis[v]){
        ans[u] = d;
    } else {
        dfs2(v, d+1);
        ans[u] = ans[v];
    }
    dfs1(u);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for(int i = 1; i <= N; i++){
        cin >> t[i];
        G[t[i]].push_back(i);
        in[t[i]]++;
    }

    for(int i = 1; i <= N; i++)
        if(in[i] == 0)
            Q.push(i);

    while(!Q.empty()){
        int u = Q.front(); Q.pop();
        int v = t[u];
        in[v]--;
        if(in[v] == 0)
            Q.push(v);
    }

    for(int i = 1; i <= N; i++)
        if(in[i] && !vis[i])
            dfs2(i);

    for(int i = 1; i <= N; i++)
        cout << ans[i] << (" \n")[i==N];

    return 0;
}
