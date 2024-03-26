#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

}

int main(){
    go
    string s;
    cin>>s;
    char a = 'A';
    int ans = 1, c = 0;
    for(auto x:s){
        if(x==a){
            c++;
            ans = max(c, ans);
        }else{
            a = x;
            c = 1;
        }
    }
    cout<<ans;
}