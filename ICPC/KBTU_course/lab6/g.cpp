#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
bool isTrue = 1;

void dfs(vector<vector<int>>&a, int t, vector<int>&vis, vector<int>&order){
    vis[t] = 1;
    for(auto to:a[t]){
        if(vis[to]==1){
            isTrue = 0;
        }
        if(!vis[to]){
            dfs(a,to,vis,order);
        }
    }
    vis[t] = 2;
    order.push_back(t);
}

void solve(){
    cin>>n>>m;
    vector<vector<int>>v(n);
    vector<int>order;
    vector<int>vis(n, 0);
    while(m--){
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
    }
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            dfs(v, i, vis, order);
        }
    }
    if(!isTrue){
        cout<<-1;
        return ;
    }
    reverse(order.begin(), order.end());
    for(int i = 0;i<n;i++){
        cout<<order[i]+1<<" ";
    }
}

int main(){
    go
    solve();
}