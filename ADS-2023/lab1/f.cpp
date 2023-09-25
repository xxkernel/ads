#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    if(n==0 || n==1){
        return false;
    }
    for(int i = 2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;cin>>n;
    int cnt = 0;
    for(int i = 2;i<10000000;i++){
        if(isPrime(i)){
            cnt++;
        }
        if(cnt==n){
            cout<<i;
            return 0;
        }
    }
}








