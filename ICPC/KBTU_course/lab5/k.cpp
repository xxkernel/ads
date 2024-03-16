#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int>v;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    // priority_queue<int, vector<int>, greater<int>>pq;
    // reverse(v.begin(), v.end());
    // for(int i = 0;i<n;i++){
    //     if(i==0){
    //         pq.push(v[i]);
    //     }
    //     else if(v[i]<pq.top()){
    //         pq.pop();
    //         pq.push(v[i]);
    //     }
    //     else{
    //         pq.push(v[i]);
    //     }
    // }
    // cout<<pq.size();
    set<int>s;
    for(int i = 0;i<n;i++){
        if(i==0){
            s.insert(v[i]);
        }
        else{
            if(v[i]>*s.begin()){
                for(auto it = s.rbegin();it != s.rend();it++){
                    if(v[i]>*it){
                        s.erase(*it);
                        s.insert(v[i]);
                        break;
                    }
                }
            }
            else{
                s.insert(v[i]);
            }
        }
    }
    cout<<s.size();
}

int main(){
    go
    solve();
}