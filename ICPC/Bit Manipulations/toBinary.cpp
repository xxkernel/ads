#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int p = 1;
    int ans = 0;
    while(n){
        int last_bit = n&1;
        ans += p*last_bit;
        n>>=1;
        p*=10;
    }
    cout<<ans<<endl;
    cout<<(5&6);
}