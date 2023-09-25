#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin>>n>>k;
    // if(n%2==1 && k%2==0){
    //     cout<<"NO"<<endl;
    //     return;
    // }
    // // else if(n%k==1){
    // //     cout<<"NO"<<endl;
    // //     return;
    // // }
    // else if(k==n){
    //     cout<<"YES"<<endl;
    //     for(int i = 0;i<n;i++){
    //         cout<<'1'<<" ";
    //     }
    //     cout<<endl;
    // }
    // else if(n%2==1 && k%2==1){
    //     cout<<"YES"<<endl;
    //     for(int i = 0;i<k-1;i++){
    //         cout<<'1'<<" ";
    //     }
    //     cout<<n-k+1<<endl;
    // }
    // else if(n%2==0 && k%2==0){
    //     cout<<"YES"<<endl;
    //     for(int i = 0;i<k-1;i++){
    //         cout<<'1'<<" ";
    //     }
    //     cout<<n-k+1<<endl;
    // }
    // else{
    //     if(n<2*k){
    //         cout<<"NO"<<endl;
    //     }
    //     else{
    //         cout<<"YES"<<endl;
    //         for(int i = 0;i<k-1;i++){
    //             cout<<"2"<<" ";
    //         }
    //         cout<<(n-2*(k-1))<<endl;
    //     }
    // }
    if(k>n){
        cout <<"NO"<<endl;
        return;
    }
    if((n-k+1)%0==1){
        cout<<"YES"<<endl;
        for(int i = 1 ; i < k ; i++){
            cout<<1<<" ";
        }
        cout <<n-k+1<<endl;
    }
    else if((n-2*(k-1))%2==0 && (n-2*(k-1))>0){
        cout<<"YES"<<endl;
        for(int i = 1 ; i < k ; i++){
            cout<<2<<" ";
        }
        cout <<n-2*(k-1)<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        solve();
    }
}