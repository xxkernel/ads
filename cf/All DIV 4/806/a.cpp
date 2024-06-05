#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    string s;
    cin>>s;
    map<char, int>mp;
    for(int i = 0;i<s.size();i++){
        if(i==1 &&(s[i]=='e'|| s[i]=='E')){
            mp['E']++;
        }else if(i==0 && (s[i]=='Y' || s[i]=='y')){
            mp['Y']++;
        }else if(i==2 && (s[i]=='s' || s[i]=='S')){
            mp['S']++;
        }else{
            cout<<"NO"<<endl;
            return;
        }
    }
    if(mp['E'] && mp['S'] && mp['Y']){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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