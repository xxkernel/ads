#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    int res = 0;
    map<int,int>mp;
    vector<int>v;
    int index = 0;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
        mp[i] = num;
    }
    while(m!=0){
        int temp = 100000;
        for(int i = 0;i<v.size();i++){
            if(temp>mp[i] && i!=index && mp[i]==v[i]){
                temp = mp[i];
                index = i;
            }
        }
        mp[index]--;
        //3 5
        //2 3 4   
        for (int i = 0; i < v.size(); i++)
        {
            if(mp[i]==0){
                mp[i] = v[i];
            }
            if(mp[i]!=v[i] && i!=index){
                mp[i]--;
            }
        }
        res++;
        m--;
    }
    // for(int i = 0;i<v.size();i++){
    //     cout<<mp[i]<<endl;
    // }
    // return ;
    for(int i = 0;i<v.size();i++){
        if(mp[i]!=v[i]){
            while(mp[i]!=0){
                mp[i]--;
                res++;
            }
            mp[i]==v[i];
        }
    }
    cout<<res<<endl;
}

int main(){
    solve();
}
