#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&v, int left, int mid, int right){
    vector<int>a;
    vector<int>b;
    int n1 = mid-left+1;
    int n2 = right-mid;
    for(int i = 0;i<n1;i++){
        a.push_back(v[left+i]);
    }
    for(int i = 0;i<n2;i++){
        b.push_back(v[mid+i+1]);
    }
    int i = 0, j = 0, k = left;
    while(i!=n1 && j!=n2){
        if(a[i]<b[j]){
            v[k++] = a[i++];
        }
        else{
            v[k++] = b[j++];
        }
    }
    while(i!=n1){
        v[k++] = a[i++];
    }
    while(j!=n2){
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
    mergeSort(v, 0, n-1);
    for(auto x:v){
        cout<<x<<" ";
    }
}