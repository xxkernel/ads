#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<char>v;
    for(int i = 0;i<n;i++){
        char a;cin>>a;
        v.push_back(a);
    }
    int cnt = 0;
    bool isStone = 0;
    for(int i = 0;i<v.size();i++){
        if(isStone && v[i]=='*'){
            break;
        }
        else if(v[i]=='@'){
            cnt++;
            isStone = false;
        }
        else if(v[i]=='*'){
            isStone = 1;
        }
        else{
            isStone = 0;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}