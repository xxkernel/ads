#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    
}

int main(){
    go
    int n;cin>>n;
    int curr = 2;
    int cnt = 0;
    bool isStart = 1;
    while(true){
        if(n==1){
            if(cnt==0){
                curr++;
                cnt = 0;
            }
            else{
                if(isStart){
                    if(cnt>=2){
                        cout<<curr<<"^"<<cnt;
                    }else{
                        cout<<curr;
                    }
                    isStart = 0;
                }else{
                    if(cnt>=2){
                        cout<<"*"<<curr<<"^"<<cnt;
                    }else{
                        cout<<"*"<<curr;
                    }
                }
                curr++;
                cnt = 0;
            }
            break;
        }
        if(n%curr==0){
            n/=curr;
            cnt++;
        }
        else{
            if(cnt==0){
                curr++;
                cnt = 0;
            }
            else{
                if(isStart){
                    if(cnt>=2){
                        cout<<curr<<"^"<<cnt;
                    }else{
                        cout<<curr;
                    }
                    isStart = 0;
                }else{
                    if(cnt>=2){
                        cout<<"*"<<curr<<"^"<<cnt;
                    }else{
                        cout<<"*"<<curr;
                    }
                }
                curr++;
                cnt = 0;
            }
        }
    }
}