#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

vector<int>v(1e5);
void solve(){
    int n, m;
    cin>>n>>m;
    if(!n &&!m){
        cout<<0<<endl;
        return;
    }
        cout<<v[n-1+m]<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    for(int i = 0;i<1e5;i++){
        v[i] = i;
    }
    int m = 1;
    int m_1 = 1;
    int temp = m;
    int curr = 1;
    for(int i = 0;i<1e5;i++){
        if(temp){
            temp--;
            v[i] = curr;
        }
        else{
            m+=m_1;
            m_1*=2;
            temp = m;
            curr = curr+m;
            v[i] = curr;
            temp--;
        }
    }
    while(n--){
        solve();
    }
}