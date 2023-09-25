#include<bits/stdc++.h>
using namespace std;

int bst(vector<int>v, int x){
    int l = 0;
    int h = v.size()-1;
    while(l<=h){
        int mid = (l+h)/2;
        if(x>=v[mid]){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return l;
}

int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    int m;cin>>m;
    for(int i = 0;i<m;i++){
        int num;cin>>num;
        int sz = bst(v,num);
        int sum = 0;
        for(int j = 0;j<sz;j++){
            sum+=v[j];
        }
        cout<<sz<<" "<<sum<<endl;
    }
}