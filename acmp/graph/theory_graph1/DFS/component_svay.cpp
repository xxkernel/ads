#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n, m;
vector<vector<int>>ans;

void dfs(vector<vector<int>>&v, int t, vector<int>&vis, vector<int>&temp){
    vis[t] = 1;
    for(auto to:v[t]){
        if(!vis[to]){
            temp.push_back(to+1);
            dfs(v, to, vis, temp);
        }
    }
}

void solve(){
    cin>>n>>m;  
    vector<vector<int>>v(n);
    vector<int>vis(n);
    for(int i = 0;i<m;i++){
        int x, y;
        cin>>x>>y;
        x--;
        y--;
        v[x].push_back(y);
        v[y].push_back(x);
    }    
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(!vis[i]){
            cnt++;
            vector<int>temp;
            temp.push_back(i+1);
            dfs(v, i, vis, temp);
            sort(temp.begin(), temp.end());
            ans.push_back(temp);
        }
    }
    cout<<cnt<<endl;
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i].size()<<endl;
        for(int j = 0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    go
    solve();
}