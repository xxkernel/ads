#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    set<int>s;
    for(int i = 0;i<n;i++){
        int cnt = 0;
        for(int j = 0;j<n;j++){
            int num;cin>>num;
            if(num){
                cnt++;
            }
        }
        s.insert(cnt);
    }
    s.size()==1 ? cout<<"YES":cout<<"NO";
}

int main(){
    go
    solve();
}