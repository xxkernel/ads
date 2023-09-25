#include<bits/stdc++.h>
using namespace std;

bool check(int mid, vector<int>v, int target){
    int i = 0, j = 0;
    int sum = 0;
    int mx = INT_MIN;
    while(i<v.size()){
        sum+=v[i];
        if(i-j+1==mid){
            mx = max(mx, sum);
            sum-=v[j];
            j++;
        }
        i++;
    }
    if(target<=mx){
        return true;
    }return false;
}

int bst(vector<int>v, int target){
    int l = 1;
    int h = v.size();
    int mn = 0;
    while(l<=h){
        int mid = (l+h)/2;
        if(check(mid, v, target)){
            h = mid-1;
            mn = mid;
        }
        else{
            l = mid+1;
        }
    }
    return mn;
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<int>v;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    cout<<bst(v,m);
}