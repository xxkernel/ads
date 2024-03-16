#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool myComparison(const pair<int,int> &a,const pair<int,int> &b){
       return a.second<b.second;
}

void solve(){
    int n;cin>>n;
    vector<pair<int,int>>v;
    for(int i = 0;i<n;i++){
        int x, y;
        cin>>x>>y;
        v.push_back(make_pair(x, y));
    }
    int res = 1;
    int temp = 0;
    sort(v.begin(),v.end(),myComparison);
    for(int i = 1;i<n;i++){
        if(v[temp].second<=v[i].first){
            res++;
            temp = i;
        }
    }
    cout<<res;
}

int main(){
    go
    solve();
}