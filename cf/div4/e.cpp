#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i = 1;i<=n;i++){
        v[i-1] = i;
    }
    int temp = 0;
    int i = 0;
    int m = 1;
    while(k--){
        if(i>n){
            i = 1;
            m = 1; 
        }
        temp = v[i];
        v[i] = 0;
        i+=m;
    }
    cout<<temp<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}