#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int x;cin>>x;
    if(x<=1399){
        cout<<"Division 4"<<endl;
    }else if(x<=1599){
        cout<<"Division 3"<<endl;
    }else if(x<=1899){
        cout<<"Division 2"<<endl;
    }else{
        cout<<"Division 1"<<endl;
    }
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}