#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    k--;
    if(n%2==0){
        cout<<1+k%n<<endl;
    }else{
        int inters = k/((n-1)/2);
        cout<<1+(k+inters)%n<<endl;
    }
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}