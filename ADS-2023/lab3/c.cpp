#include<bits/stdc++.h>
using namespace std;

bool bst(int l, int h, int x){
    while(l<=h){
        int mid = (h+l)/2;
        if(mid==x){
            return true;
        }
        else if(mid>x){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return false;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    for(int i = 0;i<m;i++){
        int cnt = 0;
        int l1, r1, l2, r2;
        cin>>l1>>r1>>l2>>r2;
        for(int j = 0;j<v.size();j++){
            if(bst(l1, r1, v[j]) || bst(l2, r2, v[j])){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}