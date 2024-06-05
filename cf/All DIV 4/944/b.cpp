#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    string s;
    cin>>s;
    for(int i = 0;i<s.size()-1;i++){
        if(s[i]!=s[i+1]){
            s[i] = s[i+1];
            char temp = s[i];
            s[i+1] = temp;
            cout<<"YES"<<endl;
            cout<<s<<endl;
            return;
        }
    }cout<<"NO"<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve(); 
    }
}