#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    deque<char>dq;
    for(int i = 0;i<n;i++){
        char ch;cin>>ch;
        dq.push_back(ch);
    }
    while(true){
        if(dq.size()>=2){
            if((dq.back()=='0' && dq.front()=='1') || (dq.back()=='1' && dq.front()=='0')){
                dq.pop_back();
                dq.pop_front();
            }else{
                break;
            }
        }else{
            break;
        }
    }
    cout<<dq.size()<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}