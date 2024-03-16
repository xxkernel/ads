#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

}

int main(){
    go
    ll n;
    cin >> n;
    int i = 2;
    for(ll i = 2; i<=n;i++){
        if(i*i>n){
            i = n;
        }
        while(n%i==0){
            if(n/i!=1){
                cout<<i<<"*";
            }else{
                cout<<i;
            }
        n/=i;
        }
    }
}