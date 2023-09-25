#include<iostream>
using namespace std;

int main(){
    int b;
    cin>>b;
    int res = 0;
    int i = 1;
    while(b!=0){
        int temp = b%2;
        b = b/2;
        res = res + temp * i;
        i*=10;
    }
    cout<<res;
}