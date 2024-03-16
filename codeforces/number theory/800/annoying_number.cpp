#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    if(n<=10){
        cout<<n<<endl;
    }
    else if(n<=100){
        int temp = 9;
        n-=10;
        while(n>0){
            temp++;
            n-=10;
        }
        cout<<temp<<endl;
    }
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}