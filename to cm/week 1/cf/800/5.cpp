#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    if(n%3==0){
        cout<<"Second"<<endl;
    }else{
        cout<<"First"<<endl;
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