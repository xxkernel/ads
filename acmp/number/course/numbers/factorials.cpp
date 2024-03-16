#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

}

int main(){
    go
    string s, t;
    cin>>s>>t;
    int cnt = t.size();
    int n = stoi(s);
    ll ans = 1;
    while(n > 1){
        ans *= n;
        n -= cnt;
    }

    cout <<ans << endl;

    return 0;
}
