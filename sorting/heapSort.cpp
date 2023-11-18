#include<bits/stdc++.h>
using namespace std;


void heapify_down(vector<int>&v, int n, int x){
    int mx = x;
    if(2*x+1<n && v[2*x+1]>v[mx]){
        mx = 2*x+1;
    }
    if(2*x+2<n && v[2*x+2]>v[mx]){
        mx = 2*x+2;
    }
    if(mx==x){
        return;
    }
    swap(v[mx], v[x]);
    heapify_down(v, n, mx);
}

void heapSort(vector<int>&v){
    for(int i = v.size()/2-1;i>=0;i--){
        heapify_down(v, v.size(), i);
    }
    for(int i = v.size()-1;i>0;i--){
        swap(v[i], v[0]);
        heapify_down(v, i, 0);
    }
}

int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    heapSort(v);
    for(auto x:v){
        cout<<x<<" ";
    }
}