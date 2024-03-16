#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int cnt = 2;
    map<int,int>mp;
    while(n>1){
        int temp = 0;
        while(n%cnt==0 && n!=1){
            temp++;
            n/=cnt;
        }
        if(temp>=1){
            mp[cnt] = temp;
        }
        cnt++;
    }
    int sz = mp.size();
    for(auto x:mp){
        sz--;
        if(sz==0){
            if(x.second==1){
                cout<<x.first;
            }
            else{
                cout<<x.first<<'^'<<x.second;
            }
        }
        else{
            if(x.second==1){
                cout<<x.first<<'*';
            }
            else{
                cout<<x.first<<'^'<<x.second<<'*';
            }
        }
    }
}