#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    string s;
    cin>>s;
    int cnt = 0;
    for(int i = 0;i<s.size();i++){
        if((i==1 || i==5 )&& s[i]!='o'){
            cnt++;
        }
        else if((i==0 || i==7) && s[i]!='c'){
            cnt++;
        }
        else if(i==2 && s[i]!='d'){
            cnt++;
        }
        else if((i==3 || i==8) && s[i]!='e'){
            cnt++;
        }
        else if(i==4 && s[i]!='f'){
            cnt++;
        }
        else if(i==6 && s[i]!='r'){
            cnt++;
        }
        else if(i==9 && s[i]!='s'){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}