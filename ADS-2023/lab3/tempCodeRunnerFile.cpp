#include<bits/stdc++.h>
using namespace std;

vector<int>v;
bool check(int mid, int m){
    int temp = 0;
    int cnt = 0;
    for(int i = 0;i<v.size();i++){
        temp+=v[i];
        if(temp<=mid){
            cnt++;
            temp = v[i];
        }
    }
    return cnt<m;
}
int main(){
    int n, m;
    long long h = 0;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
        h+=num;
    }
    int l = 0;
    while(l<=h){
        long long mid = (l+h)/2;
        if(check(mid, m)){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout<<l;
}