#include <bits/stdc++.h>

using namespace std;

#define f first
#define s second
#define MAX 2001
#define INF 0x3F3F3F3F

int g[MAX][MAX], used[MAX], dist[MAX], dist_b[MAX];

void Relax(int i, int j) {
    if (dist[i] + g[i][j] < dist[j])
        dist[j] = dist[i] + g[i][j];
}

int n, m, finish, brothers, police;

int main(){
    cin>>n>>m>>finish;
    vector<pair<int,int>>graph[n+1];
    vector<int>r_ex;
    while(m--){
        int u, v, w;
        cin>>u>>v>>w;
        u--;
        v--;
        g[u][v] = g[v][u] = w;
    }
    memset(g, 0x3F, sizeof(g));
    memset(used, 0, sizeof(used));
    memset(dist, 0x3F, sizeof(dist));
    while(finish--){
        int x;cin>>x;
        r_ex.push_back(x);
    }
    cin>>brothers>>police;
    brothers--;
    police--;
    dist[police] = 0;
    for (int i = 1; i < n; i++) {
        int minDist = INF, v = -1;
        for (int j = 1; j <= n; j++)
            if (used[j] == 0 && dist[j] < minDist) {
                minDist = dist[j];
                v = j;
            }

        if (v < 0)
            break;

        for (int j = 1; j <= n; j++)
            if (used[j] == 0 && g[v][j] != -1)
                Relax(v, j);

        used[v] = 1;
    }
    memset(used, 0, sizeof(used));

    for (int i = 1; i < n; i++) {
        int minDist = INF, v = -1;
        for (int j = 1; j <= n; j++)
            if (used[j] == 0 && dist_b[j] < minDist) {
                minDist = dist_b[j];
                v = j;
            }

        if (v < 0)
            break;

        for (int j = 1; j <= n; j++)
            if (used[j] == 0 && g[v][j] != -1)
                Relax(v, j);

        used[v] = 1;
    }
    for(int i = 0;i<n;i++){
        cout<<dist[i]<<" "<<dist_b[i]<<endl;
    }
    int ans = 1e5;
    for(int i = 0;i<finish;i++){
        if(dist_b[r_ex[i]]<dist[r_ex[i]]){
            ans = min(ans, 160/(dist[r_ex[i]])*dist_b[r_ex[i]]);
        }
    }
    cout<<ans;
}