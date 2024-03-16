#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m;cin>>m;
    vector<char>v(27);
    char a = 'a';
    for(int i = 1;i<=26;i++){
        v[i] = a++;
    }
    if(m<=26){
        cout<<"aa"<<v[m-2]<<endl;
    }
    else if(m<=53){
        m-=26;
        cout<<"a"<<v[m-1]<<"z"<<endl;
    }
    else{
        m-=52;
        cout<<v[m]<<"zz"<<endl;
    }
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}