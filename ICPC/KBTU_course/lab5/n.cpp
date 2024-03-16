#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool comp(const pair<int,int>&a, const pair<int, int>&b){
    if((double)a.first/a.second==(double)b.first/b.second){
        return a.first>b.first;
    }
    return (double)a.first/a.second<(double)b.first/b.second;
}

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i = 0;i<n;i++){
        int x, y;cin>>x>>y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), comp);
    int cnt = v[0].first;
    int sz = 1;
    int temp  = v[0].first;
    while(sz!=v.size()){
        if(!temp && sz==v.size()-1){
            cout<<"gg";
            return;
        }else{
            cnt+=v[sz].first;
            temp = v[sz].first;
        }
        if(v[sz].first<=temp){
            temp-=v[sz].first;
            temp+=v[sz].second;
            v[sz].first = 0;
            sz++;
        }else if(v[sz].first>temp){
            v[sz].first-=temp;
            temp = 0;
        }
    }
    cout<<cnt;
}

int main(){
    go
    solve();
}