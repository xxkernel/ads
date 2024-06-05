#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
#define MAX 101

int k = 1;
const int mxN = 1e5;
int v[MAX][MAX];
int bg[MAX][MAX];
int vis[mxN], tin[mxN], fup[mxN];
int n, m, timer = 0;
int cnt = 0;
bool isBip = false;

void dfs(int t, int color){
    vis[t] = color;
    cnt++;
    for(int i = 0;i<n;i++){
        if(v[t][i]){
            if(!bg[t][i]){
                continue;
            }
            if(vis[i]){
                if((vis[i]-vis[t])%2==0){
                    isBip = 1;
                }
            }
            else{
                dfs(i, color+1);
            }
        }
    }
}

void artdfs(int t, int p){
    vis[t] = 1;
    tin[t] = fup[t] = timer++;
    for(int i = 0;i<n;i++){
        if(v[t][i]==0){
            continue;
        }
        if(p==i){
            continue;
        }
        if(vis[i]){
            fup[t] = min(fup[t], tin[i]);
        }
        else{
            artdfs(i, t);
            fup[t] = min(fup[t], fup[i]);
            if(fup[i]>tin[t]){
                bg[i][t] = bg[t][i] = 1;
            }
        }
    }
}

void solve(){
    cin>>n>>m;
    while(m--){
        int x, y;
        cin>>x>>y;
        v[x][y] = v[y][x] = 1;
    }
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            artdfs(i, -1);
        }
    }
    memset(vis, 0, sizeof(vis));
    int ans = 0;
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            isBip = 0;
            int cnt = 0;
            dfs(i, 1);
            if(isBip){
                ans+=cnt;
            }
        }
    }
    cout<<"Case "<<k<<": "<<ans<<endl;
    memset(v, 0, sizeof(v));
    memset(vis, 0, sizeof(vis));
    memset(tin, 0, sizeof(tin));
    memset(fup, 0, sizeof(fup));
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
        k++;
    }
}