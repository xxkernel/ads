#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int x,y;
    cin>>x>>y;
    cout<<min(x, y)<<" "<<max(x,y)<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}