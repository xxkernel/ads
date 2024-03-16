#include<bits/stdc++.h>
using namespace std;

void solve(){
    int m;cin>>m;
    vector<int>v;
    int sum = 0;
    for(int i = 0;i<m;i++){
        int num;cin>>num;
        v.push_back(num);
        sum+=num;
    }
    if(sum%m!=0){
        cout<<"NO"<<endl;
        return;
    }
    int avg = sum/m;
    int left = 0;
    int right = v.size()-1;
    int temp = 0;
    for(int i = 0;i<v.size();i++){
        if(v[i]>avg){
            temp+=(v[i]-avg);
        }
        else if(avg<=temp+v[i] && v[i]<avg){
            temp-=(avg-v[i]);
        }
    }
    if(temp){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    // while(left<right){
    //     if(v[left]==v[right] && v[left]==avg){
    //         left++;
    //         right--;
    //     }
    //     else if(v[right]>avg){
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    //     else{
    //         if(v[right]==avg){
    //             right--;
    //         }
    //         else{
    //             while(v[left]!=avg){
    //                 v[right]++;
    //                 v[left]--;
    //             }
    //             if(v[right]!=3){
    //                 left++;
    //             }
    //         }
    //     }
    // }
    // for(auto x:v){
    //     if(x!=avg){
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }
    // cout<<"YES"<<endl;
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}