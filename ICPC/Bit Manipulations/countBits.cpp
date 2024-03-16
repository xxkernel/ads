#include<iostream>
using namespace std;

int countBits(int n){
    int cnt = 0;
    while(n>0){
        int last_bit = (n&1);
        cnt+=last_bit;
        n = n>>1;
    }
    return cnt;
}

int countBits_1(int n){
    int cnt = 0;
    while(n>0){
        n = n&(n-1);
        cnt++;
    }
    return cnt;
}

int main(){
    int n;cin>>n;
    cout<<countBits(n);
}