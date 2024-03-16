#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    long long temp = 1;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        temp*=num;
    }
    if(2023%temp!=0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
        cout<<2023/temp<<" ";
        for(int i = 0;i<m-1;i++){
            cout<<1<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}