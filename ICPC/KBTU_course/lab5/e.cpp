#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool myComparison(const pair<long long, long long> &a,const pair<long long, long long> &b){
       return a.second<b.second;
}

void solve(){
    int n;cin>>n;
    vector<pair<long long, long long>>v;
    for(int i = 0;i<n;i++){
        int x, y, x_1, y_1;
        char a, b;
        cin>>x>>a>>x_1;
        cin>>y>>b>>y_1;
        v.push_back(make_pair(x*60+x_1, y*60+y_1));
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