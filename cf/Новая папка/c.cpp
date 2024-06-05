#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    if(a>b){
        swap(a, b);
    }
    if(c>d){
        swap(c,d);
    }
    if(b<d && a<c && c>b){
        cout<<"YES"<<endl;
    }
    else if(b>d && a>c){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}