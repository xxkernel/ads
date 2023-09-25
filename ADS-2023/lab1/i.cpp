#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    queue<int>katsu;
    queue<int>saya;
    for(int i = 0;i<n;i++){
        char a;cin>>a;
        if(a=='K'){
            katsu.push(i);
        }
        else{
            saya.push(i);
        }
    }
    while(!katsu.empty() && !saya.empty()){
        if(katsu.front()>saya.front()){
            saya.push(saya.front()+n);
            saya.pop();
            katsu.pop();
        }
        else{
            katsu.push(katsu.front()+n);
            katsu.pop();
            saya.pop();
        }
    }
    if(!katsu.empty()){
        cout<<"KATSURAGI";
    }else{
        cout<<"SAKAYANAGI";
    }
}