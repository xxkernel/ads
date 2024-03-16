#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>>v(n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int num;cin>>num;
            v[i].push_back(num);
        }
    }
    while(m--){
        int x, y, z;
        cin>>x>>y>>z;
        x--;
        y--;
        z--;
        (v[x][z]==1 && v[x][y]==1 && v[y][z]==1) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}