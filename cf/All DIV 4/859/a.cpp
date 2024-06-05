#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int a, b, c;
    cin>>a>>b>>c;
    if(a+b==c){
        cout<<"+"<<endl;
    }else if(a-b==c){
        cout<<"-"<<endl;
    }else{
        cout<<"-"<<endl;
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