#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    int curr = v[0];
    for(int i = 1;i<n;i++){
        if(v[i]>curr){
            curr = v[i];
        }
        else{
            int temp = v[i];
            int j = 2;
            while(temp<=curr){
                temp = v[i]*j;
                j++;
            }
            curr = temp;
        }
    }
    cout<<curr<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}