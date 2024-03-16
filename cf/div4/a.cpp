#include<bits/stdc++.h>
using namespace std;


void solve(){
        int a=0, b=0;
    string s;cin>>s;
    for(int i = 0;i<s.size();i++){
        if(s[i]=='A'){
            a++;
        }else{
            b++;
        }
    }
    if(a>b){
        cout<<'A'<<endl;
    }else{
        cout<<'B'<<endl;
    }
}
int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}