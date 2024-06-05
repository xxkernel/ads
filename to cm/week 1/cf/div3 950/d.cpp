#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int i = 0;
    int j = 1;
    int mx = 0;
    while(j-i<=2){
        if(j==n){
            break;
        }
        if(i==0){
            mx = max(mx, __gcd(v[i], v[j]));
            i++;
            j++;
        }else{
            if(mx>__gcd(v[i], v[j])){
                j++;
            }else{
                mx = max(mx, __gcd(v[i], v[j]));
                i++;
                j++;
            }
        }
    }
    if(j-i>2){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}