#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt = 0;
    int n;cin>>n;
    for(int i = 1;i<=n;i++){
        cnt+=n/i;
    }
    cout<<cnt;
}