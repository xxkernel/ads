#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(vector<int>v, int target){
    int l = 0;
    int h = v.size()-1;
    int mid;
    while(l<=h){
        mid = (h+l)/2;
        if(v[mid]==target){
            return true;
        }
        else if(v[mid]<target){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return false;
}
int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int target;cin>>target;
    if(BinarySearch(v,target)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}