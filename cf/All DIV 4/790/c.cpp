#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n, k;cin>>n>>k;
    vector<string>v;
    int mn = INT_MAX;
    while(n--){
        string s;cin>>s;
        v.push_back(s);
    }
    for(int i = 0;i<v.size();i++){
        for(int j = i+1;j<v.size();j++){
            int sum = 0;
            for(int q = 0;q<k;q++){
                sum+=abs(int(v[i][q]-'a')-int(v[j][q]-'a'));
            }
            mn = min(mn, sum);
        }
    }
    cout<<mn<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}