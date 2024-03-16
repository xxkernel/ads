#include<bits/stdc++.h>
using namespace std;

string s;
int n;

void solve(int p, string s){
    if(p==n){
        cout<<s<<endl;
        return;
    }
    solve(p+1, s+"0 ");
    if(p<n-1){
        solve(p+2, s+"1 0 ");
    }else{
        solve(p+1, s+"1 ");
    }
}

int main(){
    cin>>n;
    solve(0, "");
}