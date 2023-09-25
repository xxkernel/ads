#include<bits/stdc++.h>
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
    int n, prime;
    cin>>n;
    int cnt = 0;
    for(int i = 2;i<1000;i++){
        if(isPrime(i)){
            cnt++;
            prime = i;
        }
        if(cnt==n){
            cout<<prime;
            return 0;
        }
    }
}
