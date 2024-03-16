#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int m;cin>>m;
        int mn = INT_MAX;
        vector<int>v;
        for(int i = 0;i<m;i++){
            int num;cin>>num;
            mn = min(mn, num);
            v.push_back(num);
        }
        int cnt = 0;
        for(auto x:v){
            if(x!=mn){
                cnt+=(x-mn);
            }
        }
        cout<<cnt<<endl;
    }
}