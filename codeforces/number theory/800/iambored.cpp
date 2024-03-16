#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    long long res = 1;
    for(int i = 1;i<=min(m,n);i++){
        res*=i;
    }
    cout<<res;
}
