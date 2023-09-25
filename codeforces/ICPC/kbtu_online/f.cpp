#include<iostream>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;
    cout<<k+((k-1)/(n-1))<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        solve();
    }
}