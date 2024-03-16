#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    string s = "", t = "";
    for(int i = 0;i<n;i++){
        char a;cin>>a;
        s+=a;
    }
    for(int i = 0;i<n;i++){
        char a;cin>>a;
        t+=a;
    }
    int temp = 0;
    int res = 0;
    for(int i = 0;i<n;i++){
        if(s[i]!=t[i]){
            temp++;
        }else{
            if(temp){
                temp = 0;
                            res++;
            }
        }
    }
    if(temp){
        res++;
    }
    cout<<res;
}

int main(){
    go
    solve();
}