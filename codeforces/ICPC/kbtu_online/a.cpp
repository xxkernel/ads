#include<iostream>
#include<vector>
using namespace std;

void solve(){
    vector<string>v;
    int num;cin>>num;
    for(int i = 0;i<2;i++){
        string s;
        for(int j = 0;j<num;j++){
            char a;cin>>a;
            if(a=='G'){
                a = 'B';
            }
            s+=a;
        }
        v.push_back(s);
    }
    if(v[0]==v[1]){
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