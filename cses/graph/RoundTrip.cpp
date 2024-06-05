#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
const int mxN = 1e5;
vector<int>v[mxN];
int vis[mxN], path[mxN];
vector<int>ans;

void dfs(int t, int p=-1){
    path[t] = p;
    vis[t] = 1;
    for(auto to:v[t]){
        if(to==p){
            continue;
        }
        if(vis[to]){
            int t2 = t;
            while(t^to){
                ans.push_back(t);
                t = path[t];
            }
            ans.push_back(to);
            ans.push_back(t2);
            cout<<ans.size()<<endl;
            for(auto x:ans){
                cout<<x+1<<" ";
            }
            exit(0);
        }else{
            dfs(to, t);
        }
    } 
}

void solve(){
    cin>>n>>m;
    while(m--){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    cout<<"IMPOSSIBLE";
}

int main(){
    go
    solve();
}