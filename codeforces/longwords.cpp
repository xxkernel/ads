#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string>v;
    for(int i = 0;i<n;i++){
        string s;cin>>s;
        v.push_back(s);
    }
    for(int i = 0;i<v.size();i++){
        if(v[i].size()>10){
            string siz = to_string(v[i].size()-2);
            string temp = v[i][0]+siz+v[i][v[i].size()-1];
            cout<<temp<<endl;
        }
        else{
            cout<<v[i]<<endl;
        }
    }
}