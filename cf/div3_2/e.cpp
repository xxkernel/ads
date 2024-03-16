#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    unsigned int temp = 0;
    unsigned int sum = 0;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        temp = temp*10+num;
        sum+=temp;
    }
    cout<<sum<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}