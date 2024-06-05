#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n, m;
    cin>>n>>m;
    if(n==m){
        cout<<"YES"<<endl;
        return;
    }
    queue<int>q;
    q.push(n);
    while(!q.empty()){
        int v = q.front();
        q.pop();
        if(v%3!=0){
            continue;
        }
        int x = (v/3)*2;
        int y = (v/3);  
        if(x==m || y==m){
            cout<<"YES"<<endl;
            return;
        } 
        if(x%3==0 && x>m){
            q.push(x);
        } 
        if(y%3==0 && y>m){
            q.push(y);
        }
    }
    cout<<"NO"<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}