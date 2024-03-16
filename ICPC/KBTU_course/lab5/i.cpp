#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

bool comp(pair<int, int> a, pair<int, int> b){
    if(a.first - a.second < b.first - b.second){
        return true;
    } else if(a.first - a.second == b.first - b.second){
        if(a.first > b.first) return true;
        else return false;
    } else{
        return false;
    }
}

void solve(){
    int n, r;
    cin >> n >> r;
    vector<pair<int, int> > v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].first;
    } 
    for(int i = 0; i < n; i++){
        cin >> v[i].second;
    } 
    sort(v.begin(), v.end(), comp);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(r >= v[i].first){
            cnt += (r - v[i].first) / (v[i].first - v[i].second) + 1;
            r -= ((r - v[i].first) / (v[i].first - v[i].second) + 1) * (v[i].first - v[i].second);
        }
    }
    cout << cnt << endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}