#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int dividers(int n){
    int sum = 1;
    for(int i = 2;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
            if(i*i!=n){
                sum = sum+(n/i);
            }
        }
    }
    return sum;
}

void solve(){
    int n, m;
    cin>>n>>m;
    bool isTrue = 0;
    map<int,int>mp;
    for(int i = n;i<=m;i++){
        mp[dividers(i)] = i;
        if(i<dividers(i) && dividers(i)<=m && mp[i] && mp[i]==dividers(i)){
            cout<<mp[i]<<" "<<i<<endl;
            isTrue = 1;
        }
    }
    if(!isTrue){
        cout<<"Absent";
    }
}

int main(){
    go
    solve();
}