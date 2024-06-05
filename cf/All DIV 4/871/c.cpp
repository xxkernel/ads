#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    int one = INT_MAX, two = INT_MAX, main = INT_MAX;
    while(n--){
        int m, x;
        cin>>m>>x;
        if(x%10==1 && (x/10)%10==1){
            main = min(main, m);
        }
        else if(x%10==1){
            two = min(two, m);
        }
        else if((x/10)%10==1){
            one = min(one, m);
        }
    }
    if(main==INT_MAX && (one==INT_MAX || two==INT_MAX || (one==INT_MAX && two==INT_MAX))){
        cout<<-1<<endl;
        return;
    }
    if(main==INT_MAX){
        if(one!=INT_MAX && two!=INT_MAX){
            cout<<one+two<<endl;
        }
    }else{
        if(two!=INT_MAX && one!=INT_MAX){
            if(two+one>main){
                cout<<main<<endl;
            }else{
                cout<<two+one<<endl;
            }
        }else{
            cout<<main<<endl;
        }
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