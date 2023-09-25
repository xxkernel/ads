#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>v1, vector<int>v2){
    vector<int>v3;
    int i = 0;
    int j = 0;
    while(i!=v1.size() && j!=v2.size()){
        if(v1[i]>v2[j]){
            v3.push_back(v2[j]);
            j++;
        }
        else{
            v3.push_back(v1[i]);
            i++;
        }
    }
    while(i!=v1.size()){
        v3.push_back(v1[i]);
        i++;
    }
    while(j!=v2.size()){
        v3.push_back(v2[j]);
        j++;
    }
    for(int i = 0;i<v3.size();i++){
        cout<<v3[i]<<" ";
    }
}

int main(){
    vector<int>v1;
    vector<int>v2;
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v1.push_back(num);
    }
    int m;cin>>m;
    for (int i = 0; i < m; i++)
    {
        int num;cin>>num;
        v2.push_back(num);
    }
    merge(v1, v2);
}