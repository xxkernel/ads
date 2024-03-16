#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    if(n==0){
        cout<<0<<" "<<0;
        return;
    }
    int mx = n;
    int mn = 1;
    int m_1 = m;
    while(m_1!=1){
        mx*=10;
        mn*=10;
        m_1--;
    }
    mn+=(n-1);
    cout<<mx<<" "<<mn;
}

int main(){
    go
    solve();
}