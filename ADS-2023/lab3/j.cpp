#include<bits/stdc++.h>
using namespace std;

int bst(vector<int>v, int f, int l, int h){
    while(l<=h){
        int mid = (l+h)/2;
        int cnt = 0;
        for(auto x:v){
            cnt += (x+mid-1)/mid;
        }
        if(cnt<=f){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return l;
}

int main(){
    int n, f;
    cin>>n>>f;
    vector<int>v;
    int max = 0;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
        if(num>max){
            max = num;
        }
    }
    cout<<bst(v, f, 0, max-1);

}


