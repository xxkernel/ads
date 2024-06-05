#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n;

vector<int> bfs(vector<vector<int>>&v, int start){
    vector<int>dist(n, 1e9);
    dist[start] = 0;
    queue<int>q;
    q.push(start);
    while(!q.empty()){
        int t = q.front();
        q.pop();
        for(int i = 0;i<n;i++){
            if(dist[i]>dist[t]+1){
                dist[i] = dist[t]+1;
                q.push(i);
            }
        }
    }
    return dist;
}

void solve(){
    cin>>n;
    vector<vector<int>>v(n, vector<int>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>v[i][j];
        }
    }
    int start, end;
    cin>>start>>end;
    start--;
    end--;
    vector<int>dist = bfs(v, start);
    if(dist[end]==1e9){
        cout<<-1;
    }else{
        cout<<dist[end];
    }
}

int main(){
    go
    solve();
}