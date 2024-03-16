#include<bits/stdc++.h>
using namespace std;

vector<int>v;

int fact(int n){
    if(n<=1){
        return 1;
    }return n*fact(n-1);
}

int permut(){
    int cnt = 0;
    for(int i = 0;i<v.size();i++){
        int sm_cnt = 0;
        for(int j = i+1;j<v.size();j++){
            if(v[j]<v[i]){
                sm_cnt++;
            }
        }
        cnt+=sm_cnt*fact(v.size()-i-1);
    }
    return cnt+1;
}

int main(){
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    cout<<permut();
}