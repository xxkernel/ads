#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<pair<int, int>>v;
    int s[n+1], e[n+1];
    memset(s,-1,sizeof(s));
    memset(e,-1,sizeof(e));

    for (int i = 0;i < n;i++) {
        int num;cin>>num;
        if(s[num]==-1){
            s[num] = i;
        }
        if(i>e[num]){
            e[num] = i;
        }
    }
    for (int i = 1;i <= n;i++) {
        if(s[i]!=-1){
            v.push_back(make_pair(e[i], s[i]));
        }
    }
    sort(v.begin(), v.end());
    int i = 0, res = 0;
    while (i<v.size()){
        res++;
        int temp = v[i].first;
        i++;
        while (i<v.size()&&v[i].second<temp){
            i++;    
        }
    }
    cout<<v.size()-res<<endl;
}

int main(){
    go
    solve();
}