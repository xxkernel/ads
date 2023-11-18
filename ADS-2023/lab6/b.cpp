#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;cin>>n>>m;
    map<int, int>mp1;
    vector<int>v;
    while(n--){
        int num;cin>>num;
        mp1[num]++;
    }
    while(m--){
        int num;cin>>num;
        if(mp1[num]){
            v.push_back(num);
            mp1[num]--;
        }
    }
    sort(v.begin(), v.end());
    for(auto x:v){
        cout<<x<<" ";
    }
}