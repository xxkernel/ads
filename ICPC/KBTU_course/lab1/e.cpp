#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<bool>v(m+1, true);
    v[0] = v[1] = false;
    for(int i = 2;i*i<=m;i++){
        if(v[i]){
            for(int j = i*i;j<=m;j+=i){
                v[j] = false;
            }
        }
    }
    for(int i = n;i<=m;i++){
        if(v[i]){
            cout<<i<<" ";
        }
    }
}