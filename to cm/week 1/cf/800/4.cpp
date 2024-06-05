#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    int m = 1;
    if(n<=10){
        cout<<n<<endl;
        return;
    }
    int ans = 0;
    int last = -1;
    bool isTrue = 0;
    while(n){
        if(last==-1){
            last = n%10;
        }else{
            isTrue = last==n%10;
        }
        if(n<10){
            if(isTrue){
                ans+=n;
            }else{
                ans+=(n-1);
            }
        }
        else{
            ans+=9;
        }
        n/=10;
    }
    cout<<ans<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}