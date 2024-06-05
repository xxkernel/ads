#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n = 8;
    string v[n];
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    for(int i = 0;i<n;i++){
        bool isTrue = 1;
        for(int j = 0;j<n;j++){
            if(v[i][j]!='R'){
                isTrue = 0;
            }
        }
        if(isTrue){
            cout<<"R"<<endl;
            return;
        }
    }
    cout<<"B"<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}