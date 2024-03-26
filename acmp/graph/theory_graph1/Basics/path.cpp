#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){  
    int n;cin>>n;
    int cnt= 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            int num;cin>>num;
            if(num==1){
                cnt++;
            }
        }
    }
    cout<<cnt/2;
}

int main(){
    go
    solve();
}