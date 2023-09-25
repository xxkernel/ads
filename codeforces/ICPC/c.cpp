#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s = "Timur";
    string temp = "";
    sort(s.begin(), s.end());
    int num;cin>>num;
    for(int i = 0;i<num;i++){
        char a;cin>>a;
        temp+=a;
    }
    sort(temp.begin(), temp.end());
    if(temp==s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    int n;cin>>n;  
    for(int i = 0;i<n;i++){
        solve();
    }
}