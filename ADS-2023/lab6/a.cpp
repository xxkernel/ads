#include<bits/stdc++.h>
using namespace std;

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int partition(vector<char>&v, int l, int h){
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

void quickSort(vector<char>&v, int l, int h){
    if(l<h){
        int pi = partition(v, l, h);
        quickSort(v, l, pi-1);
        quickSort(v, pi+1, h);
    }
}

int main(){
    int n;cin>>n;
    vector<char>v;
    vector<char>c;
    for(int i = 0;i<n;i++){
        char a;cin>>a;
        if(a=='a' || a=='e' || a=='u' || a=='i' || a=='o'){
            v.push_back(a);
        }
        else{
            c.push_back(a);
        }
    }
    quickSort(v, 0, v.size()-1);
    quickSort(c, 0, c.size()-1);
    string res = "";
    for(auto x:v){
        res+=x;
    }
    for(auto x:c){
        res+=x;
    }
    cout<<res;
}