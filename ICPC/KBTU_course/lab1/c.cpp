#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int cnt = 0;
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            if(n==i*i){
                cnt++;
            }
            else{
                cnt+=2;
            }
        }
    }
    cout<<cnt;
}