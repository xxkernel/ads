#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int n = 8;
    string v[n];
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    char ans = 'R';
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(v[i][j]=='B'){
                ans = 'B';
                if(i+1<n && v[i+1][j]=='B'){
                    if(i+1<n && v[i+2][j]=='R'){
                        cout<<'R'<<endl;
                        return;
                    }
                }
                if(j+1<n && v[i][j+1]=='B'){
                    if(j+2<n && v[i][j+2]=='R'){
                        cout<<'R'<<endl;
                        return;
                    }
                }
            }
            if(v[i][j]=='R'){
                if(i+1<n && v[i+1][j]=='R'){
                    if(i+2<n && v[i+2][j]=='B'){
                        cout<<'B'<<endl;
                        return;
                    }
                }
                if(j+1<n && v[i][j+1]=='R'){
                    if(j+2<n && v[i][j+2]=='B'){
                        cout<<'B'<<endl;
                        return;
                    }
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}