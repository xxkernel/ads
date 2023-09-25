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
    // int n;cin>>n;
    // string s;
    // vector<vector<string>>v(n);
    // for(int i = 0;i<n;i++){
    //     while(cin.peek()!='\n'){
    //         cin>>s;
    //         v[i].push_back(s);
    //     }
    // }
    // for(int i = 0;i<v.size();i++){
    //     for(int j = 0;j<v[i].size();j++){
    //         cout<<v[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    vector<int>v;
    int ch;
    ch = cin.get();
    for(auto x:v){
        cout<<x<<endl;
    }
}