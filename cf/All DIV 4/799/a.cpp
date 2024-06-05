#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int cnt = 0;
    if(a<b){
        cnt++;
    }if(a<c){
        cnt++;
    }if(a<d){
        cnt++;
    }cout<<cnt<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}