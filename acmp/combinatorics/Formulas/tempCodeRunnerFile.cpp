#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    if(n<=1){
        cout<<1;
    }else if(n<=2){
        cout<<2;
    }else{
        cout<<n*(n-1)*(n-2);
    }
}