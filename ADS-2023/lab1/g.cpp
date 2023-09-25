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
    int cnt = 0, cnt_1 = 0;
    for(int i = 2;i<100000;i++){
        if(isPrime(i)){
            cnt++;
            if(isPrime(cnt)){
                cnt_1++;
                prime = i;
            }
        }
        if(cnt_1==n){
            cout<<prime;
            return 0;
        }
    }
}