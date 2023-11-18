#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    int temp = INT_MAX;
    for(int i = 1;i<v.size();i++){
        if(v[i]-v[i-1]<temp){
            temp = v[i]-v[i-1];
        }
    }
    for(int i = 1;i<v.size();i++){
        if(v[i]-v[i-1]==temp){
            cout<<v[i-1]<<" "<<v[i]<<" ";
        }
    }
}