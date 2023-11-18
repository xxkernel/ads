#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(vector<int>&v, int left, int right){
    int i = left-1;
    int pivot = v[right];
    for(int j = left;j<right;j++){
        if(v[j]<pivot){
            i++;
            swap(&v[j], &v[i]);
        }
    }
    i++;
    swap(&v[right], &v[i]);
    return i;
}

void quickSort(vector<int>&v, int left, int right){
    if(left<right){
        int pi = partition(v, left, right);
        quickSort(v, left, pi-1);
        quickSort(v, pi+1, right);
    }
}

int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    quickSort(v, 0, v.size()-1);
    for(auto x:v){
        cout<<x<<" ";
    }
}