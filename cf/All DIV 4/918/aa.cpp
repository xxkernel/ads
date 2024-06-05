#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n;cin>>n;
    vector<char>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int lastD = -1, lastW = -1;
    bool isAlp = 0;
    for(int i = 0;i<v.size();i++){
        if(isAlp && isdigit(v[i])){
            cout<<"NO"<<endl;
            return;
        }
        if(!isAlp && isalpha(v[i])){
            isAlp = 1;
            lastW = int(v[i]-'a');
        }
        else if(isdigit(v[i]) && lastD<=int(v[i]-'0')){
            lastD = int(v[i]-'0');
        }
        else if(isalpha(v[i]) && lastW<=int(v[i]-'a')){
            lastW = int(v[i]-'a');
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    // bool isTrue = 1;
    // int last_d = -1;
    // bool isAlp = 0;
    // int last_w = -1;
    // for(int i = 0;i<n;i++){
    //     char a;cin>>a;
    //     if(isAlp && isalpha(a) && last_w>int(a-'a')){
    //         isTrue = 0;
    //     }
    //     if(isdigit(a) && isAlp){
    //         isTrue = 0;
    //     }
    //     if(isalpha(a) && last_w==-1){
    //         isAlp = 1;
    //         last_w = int(a-'a');
    //     }
    //     else if(isalpha(a) && last_w<int(a-'a')){
    //         last_w = int(a-'a');
    //     }
    //     else if(isdigit(a) && last_d<(a-'0')){
    //         last_d = a-'0';
    //     }
    //     else if(isdigit(a) && isAlp){
    //         isTrue = 0;
    //     }
    // }

    // if(isTrue){
    //     cout<<"YES"<<endl;
    // }else{
    //     cout<<"NO"<<endl;
    // }
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}