#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m;cin>>m;
    int temp = 0;
    bool isTrue = 0;
    vector<char>v;
    for(int i = 0;i<m;i++){
        char a;cin>>a;
        if(!isTrue && a=='B'){
            isTrue = 1;
        }
        if(isTrue){
            temp++;
        }
        v.push_back(a);
    }
    for(int i = v.size()-1;i>=0;i--){
        if(v[i]=='B'){
            break;
        }
        temp--;
    }
    cout<<temp<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}