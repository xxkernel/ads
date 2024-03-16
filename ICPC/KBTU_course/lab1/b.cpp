#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;cin>>n;
    bool isTrue = 0;
    for(int i = 2;i*i<=2*n;i++){
        if(2*n%i==0){
            int a = (2*n)/i+1-i;
            if(a%2==0){
                a/=2;
                cout<<n<<" = "<<a;
                for(int j = 1;j<i;j++){
                    cout<<" + "<<a+j;
                }
                cout<<endl;
                isTrue = 1;
                break;
            }
        }
    }
    if(!isTrue){
        cout<<"IMPOSSIBLE"<<endl;
    }
}

int main() {
    int n;cin>>n;
    while (n--) {
        solve();
    }
}
