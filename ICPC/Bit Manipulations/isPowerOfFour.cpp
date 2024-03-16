#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    if(n>=0 && n&(n-1)==0 && n%3==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}