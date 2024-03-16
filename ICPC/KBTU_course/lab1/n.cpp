#include<bits/stdc++.h>
using namespace std;

vector<long long>v(1000001, 0);
vector<int>phi(1000001, 0);

void ph(){
    for(int i = 0;i<phi.size();i++){
        phi[i] = i;
    }
    for(int i = 2;i<phi.size();i++){
        if(phi[i]==i){
            for(int j = i;j<phi.size();j+=i){
                phi[j]-=phi[j]/i;
            }
        }
    }
    
    v[0] = 0;
    v[1] = 1;
    for(int i = 2;i<1000001;i++){
        v[i] = v[i-1]+phi[i];
    }
}


void solve(){
    int n;cin>>n;
    long long H = v[n]*v[n];
    cout<<H<<endl;
}

int main(){
    ph();
    int n;cin>>n;
    while(n--){
        solve();
    }
}