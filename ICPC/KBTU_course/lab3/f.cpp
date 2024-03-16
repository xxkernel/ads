#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int dp[300001];

void solve(){
    int n;cin>>n;
    cout<<dp[n]<<endl;
}

int main(){
    go
    dp[1] = 1;
    int temp = 2;
    int temp_2 = 3;
    int curr = 0;
    for(int i = 2;i<300001;i++){
        dp[i] = dp[i-1];
        curr++;
        if(temp==curr){
            curr = 0;
            temp+=temp_2;
            temp_2++;
            dp[i]+=1;
        }
    }
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}