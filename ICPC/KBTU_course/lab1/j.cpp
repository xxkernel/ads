#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "";
    int n;cin>>n;
    while(n){
        if(n&1){
            s = "SX" + s;
        }else{
            s = "S" + s;
        }
        n>>=1;
    }
    cout<<s.substr(2);
}