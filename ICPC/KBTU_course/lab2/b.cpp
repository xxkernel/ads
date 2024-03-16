#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("inverse.in", "r", stdin);
    freopen("inverse.out", "w", stdout);
    int n;cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v[num-1] = i+1;
    }   
    for(auto x:v){
        cout<<x<<" ";
    }

}