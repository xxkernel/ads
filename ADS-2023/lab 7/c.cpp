#include<bits/stdc++.h>
using namespace std;

bool bst(int x, vector<int>&v){
    int l = 0;
    int h = v.size()-1;
    int mid;
    while(l<=h){
        mid = (h+l)/2;
        if(v[mid]==x){
            v[mid] = -1;
            return true;
        }
        if(v[mid]>x){
            h = mid-1;
        }
        if(v[mid]<x){
            l = mid+1;
        }
    }
    return false;
}

int main(){
    int n,m;cin>>n>>m;
    vector<int>v_1;
    vector<int>v_2;
    for(int i = 0; i<n;i++){
        int num;cin>>num;
        v_1.push_back(num);
    }

    for(int i = 0 ;i<m;i++){
        int num;cin>>num;
        v_2.push_back(num);
    }

    sort(v_1.begin(), v_1.end());
    sort(v_2.begin(), v_2.end());
    vector<int>v;
    for(int i = 0;i<v_2.size();i++){
        if(bst(v_2[i], v_1)){
            v.push_back(v_2[i]);
        }
    }
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}