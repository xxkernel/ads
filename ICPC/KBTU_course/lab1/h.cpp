#include<bits/stdc++.h>
using namespace std;

long long Egcd(long long a, long long b, long long &x, long long &y){
    if(b==0){
        x = 1;
        y = 0;
        return a;
    }
    long long x1, y1;
    long long d = Egcd(b, a%b, x1, y1);
    x = y1;
    y = x1-y1*(a/b);
    return d;
}

void solve(){
    long long a, b;
    cin>>a>>b;
    long long x, y;
    long long res = Egcd(a, b, x, y);
    if(res>1){
        cout<<"No Solution"<<endl;
    }else{
        if(x<0){
            x+=b;
            y-=a;
        }
        cout<<x<<" "<<y<<endl;
    }
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}