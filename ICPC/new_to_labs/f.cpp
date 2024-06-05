#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int mxN = 1e7;
vector<int>v(mxN+1, 1);

void solve(){

}

int main(){
    go
    for(int i = 2;i*i<=mxN;i++){
        if(v[i]){
            for(int j = i*i;j<=mxN;j+=i){
                v[j] = 0;
            }
        }
    }
    vector<int>p(mxN+1, 0);
    for(int i = 2;i<=mxN;i++){
        if(v[i]){
            p[i] = p[i-1]+1;
        }else{
            p[i] = p[i-1];
        }
    }
    int x,y;
    while(cin>>x>>y){
        cout<<p[y]-p[x-1]<<endl;
        cout<<endl;
    }
}