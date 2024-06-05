#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    vector<int>ans;
    if(m>n || n)
    if(n==k || (n-(k-1))%2==1){
        cout<<"YES"<<endl;
        while(k!=1){
            cout<<"1 "; 
            n-=1;
            k--;
        }
        if(n%2==1){
            cout<<n<<endl;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }
    else if((n-(k-1))%2==0){
        while(k!=1){
            cout<<"2 ";
            n-=2;
            k--;
        }
        if(n%2==0){
            cout<<n<<endl;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }else{
        cout<<"NO"<<endl;
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