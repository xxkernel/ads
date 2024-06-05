#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int n;
const int mxN = 1e5;
int dp[mxN];
bool isTrue = 0;

void solve(){
    cin>>n;
    int twoway = 0;
    int oneway = 0;
    int noone = 0;
    while(n--){
        int x, y;
        cin>>x>>y;
        if(x%2==1 && y%2==1){
            twoway++;
        }
        else if(x%2==1 || y%2==1){
            oneway++;
            isTrue = 1;
        }else{
            noone++;
        }
    }
    int ans = 0;
    if(twoway%2==0){
        cout<<0;
        return;
    }
    if(isTrue){
        twoway+=oneway-1;
    }
    ans*=pow(2, noone);
    ans+=pow(2, (twoway+oneway-1));
    cout<<ans;
}

int main(){
    go
    solve();
}