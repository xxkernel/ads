#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

}

int main(){
    go
    int n;
    cin >> n;
    vector<int>v(n+n+1, 1);
    v[0] = v[1] = 0;
    for(int i = 2;i*i<=n+n;i++){
        if(v[i]){
            for(int j = i*i;j<=n+n;j+=i){
                v[j] = 0;
            }
        }
    }
    for(int i = 1;i<=n;i++){
        for(int j = i+1;j<=n;j++){
            if(v[j-i]){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}