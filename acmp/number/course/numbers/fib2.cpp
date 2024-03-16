#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){

}

int main(){
    go
    int n;
    cin >> n;
    int f1 = 0, f2 = 1, f3 = 1;
    int i = 1;
    while(f3<n){
        f3 = f1+f2;
        f1 = f2;
        f2 = f3;
        i++;
    }
    if(f3==n){
        cout<<1<<endl;
        cout<<i;
    }else{
        cout<<0;
    }
}