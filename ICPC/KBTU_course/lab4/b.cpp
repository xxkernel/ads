#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int N = 1e5+5;
int n, m;
ll t[4*N];

void update(int v, int l, int r, int i, int x){
    if(l==r){
        t[v] = x;
    }else{
        int mid = (l+r)/2;
        if(i<=mid){
            update(v+v, l, mid, i, x);
        }else{
            update(v+v+1, mid+1, r, i, x);
        }
        t[v] = t[2*v]+t[2*v+1];
    }
}

ll get(int v, int l, int r, int ql, int qr){
    if(qr<1 || r<ql){
        return 0;
    }
    if(ql<=1 || r<=qr){
        return t[v];
    }
    int mid = (l+r)/2;
    return get(v+v, l, mid, ql, qr)+get(v+v+1, mid+1, r, ql, qr);
}

void solve(){
    cin>>n>>m;
    while(m--){
        char a;
        int x, y;
        cin>>a>>x>>y;
        if(a=='A'){
            update(1, 1, n, x, y);
        }else{  
            cout<<get(1,1,n,x,y)<<endl;
        }
    }
}

int main(){
    go
    solve();
}