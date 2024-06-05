#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(3, 0);
    string igro[3][100];
    map<string, set<int>>mp;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<n;j++){
            cin>>igro[i][j];
            mp[igro[i][j]].insert(i);
        }
    }
    for(int i = 0;i<3;i++){
        for(int j = 0;j<n;j++){
            if(mp[igro[i][j]].size()==1){
                v[i]+=3;
            }else if(mp[igro[i][j]].size()==2){
                v[i]++;
            }else{
                continue;
            }
        }
    }
    for(auto x:v){
        cout<<x<<" ";
    }cout<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}