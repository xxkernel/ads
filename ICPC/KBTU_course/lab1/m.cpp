#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int cnt = 0;
    for(int i = 2;i<=n;i++){
        int temp = i;
        int m = i;
        for(int j = 2;j*j<=m;j++){
            if(m%j==0){
                while(m%j==0){
                    m/=j;
                }
                temp-=temp/j;
            }
        }
        if(m>1){
            temp-=temp/m;
        }
        cnt+=temp;
    }
    cout<<cnt;
}