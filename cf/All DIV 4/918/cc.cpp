#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    vector<pair<int,int>>v;
    for(int i = 0;i<n+m+1;i++){
        int a, b;
        cin>>a>>b;
        v.push_back(make_pair(a, b));
    }
    for(int i = 0;i<n+m+1;i++){
        int x = n;
        int y = m;
        ll xx = 0, yy = 0;
        for(int j = 0;j<n+m+1;j++){
            if(i!=j){
                if(v[j].second==v[j].first){
                    if(y>x){
                        y--;
                        yy+=v[j].second;
                    }else{
                        xx+=v[j].first;
                        x--;
                    }
                }
                else if(v[j].second>v[j].first && y){
                    yy+=v[j].second;
                    y--;
                }
                else if(v[j].second<v[j].first && x){
                    xx+=v[j].first;
                    x--;
                }else if(v[j].second<v[j].first && !x){
                    yy+=v[j].second;
                    y--;
                }else if(v[j].second>v[j].first && !y){
                    xx+=v[j].first;
                    x--;
                }
            }
        }
        cout<<xx<<" "<<yy<<endl;
        // if(v[i].second>v[i].first && m){
        //     cout<<yy<<" ";
        // }else if(v[i].second<v[i].first && n){
        //     cout<<xx<<" ";
        // }
        // else if(v[i].second>v[i].first && !m){
        //     cout<<xx<<" ";
        // }else{
        //     cout<<yy<<" ";
        // }
    }
    cout<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}