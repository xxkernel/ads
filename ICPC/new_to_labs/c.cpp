#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

}

int main(){
    go
    int n;cin>>n;
    int ans = 0;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i==0){
            ans++;
            if(i*i<n){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
}