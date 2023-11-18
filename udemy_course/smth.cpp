#include<iostream>
#include<vector>
using namespace std;

void insertVector(int n, vector<int>&v){
    while(n--){
        int num;cin>>num;
        v.push_back(num);
    }
}

int main(){
    vector<int>v;
    int n;cin>>n;
    int *b = &n;
    cout<<n<<endl;
    b++;
    cout<<n<<endl;
    cout<<b<<endl;
    // while(n--){
    //     int num;cin>>num;
    //     v.push_back(num);
    // }
    // for(auto x:v){
    //     cout<<x<<" ";
    // }
    // insertVector(n, v);
    // for(auto x:v){
    //     cout<<x<<" ";
    // }
}