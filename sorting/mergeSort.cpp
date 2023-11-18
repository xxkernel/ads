#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v, int left, int mid, int right){
    vector<int>a;
    vector<int>b;
    int n = mid-left+1;
    int m = right-mid;

    for(int i = 0;i<n;i++){
        a.push_back(v[left+i]);
    }
    for(int i = 0;i<m;i++){
        b.push_back(v[mid+1+i]);
    }
    int i = 0, j = 0, k = left;
    while(i!=n && j!=m){
        if(a[i]<b[j]){
            v[k++] = a[i++];
        }
        else{
            v[k++] = b[j++];
        }
    }
    while(i!=n){
        v[k++] = a[i++];
    }
    while(j!=m){
        v[k++] = b[j++];
    }
}

void mergeSort(vector<int>&v, int left, int right){
    if(left<right){
        int mid = (left+right)/2;
        mergeSort(v, left, mid);
        mergeSort(v, mid+1, right);
        merge(v, left, mid, right);
    }
}

int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    mergeSort(v, 0, v.size()-1);
    for(auto x:v){
        cout<<x<<" ";
    }
}