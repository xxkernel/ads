#include<bits/stdc++.h>
using namespace std;

vector<int>v;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void reverse(int st, int end){
    while(st<end){
        swap(v[st], v[end]);
        st++;
        end--;
    }
}

bool next_permutation(){
    int i = v.size()-2;
    while(i>=0 && v[i]>=v[i+1]){
        i--;
    }
    if(i<0){
        return 0;
    }
    int j = v.size()-1;
    while(v[j]<=v[i]){
        j--;
    }
    swap(v[i], v[j]);
    reverse(i+1, v.size()-1);
    return 1;
}

int main(){
    freopen("success.in", "r", stdin);
    freopen("success.out", "w", stdout);
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    if(next_permutation()){
        for(int i = 0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }else{
        sort(v.begin(), v.end());
        for(auto x:v){
            cout<<x<<" ";
        }
    }
}