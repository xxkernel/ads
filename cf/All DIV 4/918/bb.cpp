#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>a(n);
    vector<int>b(n+1);
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n+1;i++){
        cin>>b[i];
    }
    int x = b[n];
    int ans = 0;
    int i = 0;
    int mn = INT_MAX;
    while(true){
        if(i==n+1){
            cout<<ans<<endl;
            return;
        }
        if(abs(mn-x)>abs(a[i]-x)){
            mn = a[i];
        }
        if(a.size()!=n+1 && i==n){
            a.push_back(mn);
            ans++;
        }
        if(b[i]==a[i]){
            i++;
        }
        else{
            ans++;
            if(b[i]<a[i]){
                a[i]--;
            }
            if(b[i]>a[i]){
                a[i]++;
            }
        }
    }
    // if(a.size()==n+1){
    //     cout<<ans<<endl;
    //     return;
    // }
    // else{
    //     ans++;
    //     a.push_back(mn);
    //     while(b[n]!=a[n]){
    //         if(b[n]>a[n]){
    //             a[n]++;
    //         }else{
    //             a[n]--;
    //         }
    //         ans++;
    //     }
    // }
    // cout<<ans<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}