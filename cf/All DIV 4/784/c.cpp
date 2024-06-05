#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    bool isTrue = 1;
    int cnt = 2;
    int even = 0, odd = 0;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        if(cnt==2){
            if(num%2==0){
                cnt = 0;
            }else{
                cnt = 1;
            }
        }
        else if((cnt!=1 && num%2==0) || (cnt!=0 && num%2==1)){
            isTrue = 0;
        }else{
            if(num%2==0){
                cnt = 0;
            }else{
                cnt = 1;
            }
        }

        if(num%2==0){
            even++;
        }
        else if(num%2==1){
            odd++;
        }
    }
    if(!isTrue && odd!=n && even!=n){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
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