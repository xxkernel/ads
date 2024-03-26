#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int x, y;
    cin>>x>>y;
    int mx = max(x, y);
    ll z = mx*mx;
    if(x==y){
        cout<<z-(x-1)<<endl;
    }
    else if(x>y && y==1){
        if(x%2==0){
            cout<<z<<endl;
        }else{
            cout<<z-(x-y)-(x-1)<<endl;
        }
    }else if(x<y && x==1){
        if(y%2==1){
            cout<<z<<endl;
        }else{
            cout<<z-(y-x)-(y-1)<<endl;
        }
    }else{
        cout<<z-abs(x-y)<<endl;
    }
}

int main(){
    go
    int n;cin>>n;
    while(n--){
        solve();
    }
}