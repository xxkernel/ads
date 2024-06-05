#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

}

int main(){
    go
    int n, m;
    cin>>n>>m;
    vector<int>v(m+1, 1);
    v[0] = v[1] = 0;
    for(int i = 2;i*i<=m;i++){
        if(v[i]){
            for(int j = i*i;j<=m;j+=i){
                v[j] = 0;
            }
        }
    }
    for(int i = n;i<=m;i++){
        if(v[i]){
            cout<<i<<" ";
        }
    }
}