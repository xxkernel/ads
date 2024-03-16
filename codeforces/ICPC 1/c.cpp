#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int m;cin>>m;
        map<int,int>mp;
        while(m--){
            int num;cin>>num;
            mp[num]++;
        }
        bool isTrue = 0;
        for(auto x:mp){
            if(x.second>=3){
                isTrue = 1;
                cout<<x.first<<endl;
                break;
            }
        }
        if(!isTrue){
            cout<<-1<<endl;
        }
    }
}