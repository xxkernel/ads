#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    int x, y;
    scanf("%d:%d", &x, &y);
    if(x==12){
        if(y<10){
            cout<<x<<":"<<0<<y<<" PM"<<endl;
        }else{
            cout<<x<<":"<<y<<" PM"<<endl;
        }
    }else if(x>12){
        if(x%12>9){
            if(y<10){
                 cout<<x%12<<":"<<0<<y<<" PM"<<endl;
            }
            else{
                cout<<x%12<<":"<<y<<" PM"<<endl;
            }  
        }
        else{
            if(y<10){
                 cout<<0<<x%12<<":"<<0<<y<<" PM"<<endl;
            }
            else{
                cout<<0<<x%12<<":"<<y<<" PM"<<endl;
            }  
        }
    }else if(x==0){
        if(y>9){
            cout<<12<<":"<<y<<" AM"<<endl;
        }else{
            cout<<12<<":"<<0<<y<<" AM"<<endl;
        }

    }
    else{
        if(x>9){
            if(y<10){
                cout<<x<<":"<<0<<y<<" AM"<<endl;
            }
            else{
                cout<<x<<":"<<y<<" AM"<<endl;
            }
        }
        else{
            if(y<10){
                cout<<0<<x<<":"<<0<<y<<" AM"<<endl;
            }
            else{
                cout<<0<<x<<":"<<y<<" AM"<<endl;
            }
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