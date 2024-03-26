#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<vector<int>>v(n);
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int num;
            cin>>num;
            v[i].push_back(num);
        }
    }
    map<int,int>mp, mp_1;
    for(int i = 0;i<n;i++){
        bool isTrue = 0;
        for(int j = 0;j<n;j++){
            if(v[i][j]==1){
                mp[i+1]++;
                isTrue = 1;
                mp_1[j+1]++;
            }
        }
    }
    cout<<n-mp_1.size()<<" ";
    for(int i = 1;i<=n;i++){
        if(mp_1[i]==0){
            cout<<i<<" ";
        }
    }cout<<endl;
    cout<<n-mp.size()<<" ";
    for(int i = 1;i<=n;i++){
        if(mp[i]==0){
            cout<<i<<" ";
        }
    }

}

int main(){
    go
    solve();
}