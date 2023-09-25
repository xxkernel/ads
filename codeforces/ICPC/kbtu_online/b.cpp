#include<bits/stdc++.h>
using namespace std;

void solve(){
    int num;cin>>num;
    vector<int>v;
    int m = 1;
    while(num){
        if(num%10!=0){
            v.push_back(num%10*m);
        }
        num/=10;
        m*=10;
    }
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        solve();
    }
}