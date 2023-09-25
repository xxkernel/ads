#include<iostream>
#include<vector>
using namespace std;

int bst(vector<int>v, int x){
    int l = 0;
    int h = v.size()-1;
    int mid;
    while(l<=h){
        mid = (h+l)/2;
        if(v[mid]==x){
            return mid;
        }
        else if(v[mid]>x){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;cin>>n;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    int m;cin>>m;
    if(bst(v, m)!=-1){
        cout<<0<<" "<<bst(v, m)<<endl;
    }
}