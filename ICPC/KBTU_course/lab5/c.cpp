#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int hIndex(vector<int> &v) {
    for (int i = 1; i < v.size(); i++){
        if (v[i]<i){ 
            return i-1;
        }
    }
    return v.size()-1;
}

void solve(){
    int n, l;
    cin>>n>>l;
    vector<int>v(n+1);
    for (int i = 1;i<=n;i++){
        cin >> v[i];
    }
    sort(v.begin() + 1, v.end(), greater<int>());
    int h = hIndex(v);
    for (int i=h+1; i>max(h-l+1, 0);i--){
        v[i]++;
    }
    sort(v.begin()+1, v.end(), greater<int>());
    h = hIndex(v);
    cout<<h<<endl;
}

int main(){
    go
    solve();
}