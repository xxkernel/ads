#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n;
const int mxN = 1e5;
vector<int>v[mxN];

void solve(){
    cin>>n;
    vector<int>count(n, 0);
    for(int i = 0;i<n;i++){
        int m;cin>>m;
        for(int j = 0;j<m;j++){
            int x;cin>>x;
            x--;
            v[i].push_back(x);
            count[x]++;
        }
    }
    priority_queue<int>pq;
    for(int i = 0;i<n;i++){
        if(count[i]==0){
            pq.push(i);
        }
    }
    vector<int>ans;
    while(!pq.empty()){
        int temp = pq.top();
        pq.pop();
        ans.push_back(temp);
        for(int i = 0;i<v[temp].size();i++){
            if(count[v[temp][i]]==1){
                pq.push(v[temp][i]);
            }
            count[v[temp][i]]--;
        }
    }
    for(int i = ans.size()-1;i>=0;i--){
        cout<<ans[i]+1<<" ";
    }
}

int main(){
    go
    solve();
}