#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool myComparison(const pair<int, double> &a,const pair<int, double> &b){
       return a.second<b.second;
}
void solve(int n){
    vector<pair<int,double>>v;
    map<int,int>mp;
    for(int i = 0;i<n;i++){
        int x, y;
        cin>>x>>y;
        mp[x] = i+1;
        v.push_back(make_pair(x, (double)x/y));
    }
    sort(v.begin(), v.end(), myComparison);
    for(auto x:v){
        cout<<mp[x.first]<<" ";
    }
}

int main(){
    go
    int n;
    while(cin>>n){
        solve(n);
    }
}