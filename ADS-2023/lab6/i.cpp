#include<bits/stdc++.h>
using namespace std;

vector<char>v;
void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int l, int h){
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

void quickSort(int l, int h){
    if(l<h){
        int pi = partition(l, h);
        quickSort(l, pi-1);
        quickSort(pi+1, h);
    }
}

int main(){
    string s;cin>>s;
    for(int i = 0;i<s.size();i++){
        v.push_back(s[i]);
    }
    quickSort(0, v.size()-1);
    for(auto x:v){
        cout<<x;
    }
}