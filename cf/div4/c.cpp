#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    int sum = 0;
    int m = 1;
    int mul = 1;
    while(n){
        int temp = n%10;
        if(sum==0){
            sum+=temp;
        }else{
            sum+=(temp*45)+(m*(temp*(temp-1)/2));
        }
        n/=10;
        m*=10;
    }
    cout<<sum<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}