#include<bits/stdc++.h>
using namespace std;

bool check(vector<long long>v, long long mid, int m){
    long long temp = 0;
    long long cnt = 1;
    for(int i = 0;i<v.size();i++){
        if(temp+v[i]>mid){
            temp = v[i];
            cnt++;
        }else{
            temp+=v[i];
        }
    }
    return cnt<=m;
}
int main(){
    int n, m;
    long long h = 0;
    vector<long long>v;
    cin>>n>>m;
    for(int i = 0;i<n;i++){
        long long num;cin>>num;
        v.push_back(num);
        h+=num;
    }
    long long l = *max_element(v.begin(), v.end());
    long long ans = 0;
    while(l<=h){
        long long mid = l+(h-l)/2;
        if(check(v, mid, m)){
            h = mid-1;
            ans = mid;
        }
        else{
            l = mid+1;
        }
    }
    cout<<ans;
}