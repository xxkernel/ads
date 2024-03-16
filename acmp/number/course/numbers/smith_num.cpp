#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int sumOf(int n){
    int res = 0;
    while(n){
        res+=n%10;
        n/10;
    }
    return res;
}

int main(){
    go
    int n;
    while(cin>>n){
        int temp = sumOf(n);
        int temp_1 = 0;
        for(int i = 2;i*i<=n;i++){
            if(n%i==0){
                temp_1+=sumOf(i);
                if(i*i!=n){
                    temp_1+=sumOf(n/i);
                }
            }
        }
        if(temp_1==temp){
            cout<<'1';
        }else{
            cout<<'0';
        }
    }
}