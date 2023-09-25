#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int bst(int x){
    int l = 0;
    int h = v.size()-1;
    int mid;
    int ans = -1;
    while(l<=h){
        mid = (l+h)/2;
        if(v[mid]>x){
            h = mid-1;
        }
        else{
            l = mid+1;
            ans = mid;
        }
    }
    return ans+1;
}

int count(int l, int r){
    return bst(r) - bst(l-1);
}

int main(){
    int n;
    unsigned long long m;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    //21 1 2 3 5 8 13
    //1 2 3 5 8 13 21
    for(int i = 0;i<m;i++){
        int l1, r1, l2, r2;
        cin>>l1>>r1>>l2>>r2;
        if(l1 > r2 || l2 > r1){
            cout<<count(l1,r1) + count(l2,r2)<<endl;
        }else{
            int mn = min(l1,l2);
            int mx = max(r1,r2);
            cout<<count(mn,mx)<<endl;
        }
    }
}