#include<bits/stdc++.h>
using namespace std;

int bc(int n, int k){
    vector<int>v(k);
    v[0] = n-k+1;
    for(int i = 1;i<k;i++){
        v[i] = v[i-1]*(n-k+1+i)/(i+1);
    }
    return v[k-1];
}

void solveEach(int n){
    int cnt = 2;
    map<int,int>mp;
    while(n>1){
        int temp = 0;
        while(n%cnt==0 && n!=1){
            temp++;
            n/=cnt;
        }
        if(temp>=1){
            mp[cnt] = temp;
        }
        cnt++;
    }
    int sz = mp.size();
    for(auto x:mp){
        sz--;
        if(sz==0){
            if(x.second==1){
                cout<<x.first;
            }
            else{
                cout<<x.first<<'^'<<x.second;
            }
        }
        else{
            if(x.second==1){
                cout<<x.first<<" * ";
            }
            else{
                cout<<x.first<<'^'<<x.second<<" * ";
            }
        }
    }
    cout<<endl;
}

void solve(){
    int n,k;
    cin>>n>>k;
    int temp = bc(n, k); 
    if(temp==1){
        cout<<"1"<<endl;
        return;
    }
    solveEach(temp);
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}