#include<iostream>
#include<vector>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(vector<int>&v, int l, int h){
    int pivot = v[h];
    int i = l-1;
    for(int j = l;j<h;j++){
        if(v[j]<pivot){
            i++;
            swap(&v[i], &v[j]);
        }
    }
    i++;
    swap(&v[i], &v[h]);
    return i;
}

void quickSort(vector<int>&v, int l, int h){
    if(l<h){
        int pi = partition(v, l, h);
        quickSort(v, l, pi-1);
        quickSort(v, pi+1, h);
    }
}

int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    quickSort(v, 0, v.size());
    for(auto x:v){
        cout<<x<<" ";
    }
}