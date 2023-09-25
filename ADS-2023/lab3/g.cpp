#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,f;
    cin>>n>>f;
    vector<int>v;
    int maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
        maxi = max(maxi, num);
    }
    int l = 1;
    int h = maxi-1;
    int mid = (l+h)/2;
    while(l<=h){
        mid = (l+h)/2;
        int cnt = 0;
        for(int i = 0;i<v.size();i++){
            // cnt+=(v[i]/mid);
            // if(v[i]*(v[i]/mid)!=v[i]){
            //     cnt++;
            // }
            cnt+=(v[i]+mid-1)/mid;
        }
        if(cnt<=f){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout<<l;
}



// #include<bits/stdc++.h>
// using namespace std;

// vector<int>v;
// bool check(int mid, int f){
//     int cnt = 0;
//     for(auto x:v){
//         // cnt += x/mid;
//         // if(x%mid){
//         //     cnt++;
//         // }
//         cnt += (x-1+mid)/mid;
//     }
//     if(cnt<=f){
//         return true;
//     }
//     return false;
// }

// int bst(int f, int l, int h){
//     while(l<=h){
//         int mid = (l+h)/2;
//         if(check(mid, f)){
//             h = mid-1;
//         }
//         else{
//             l = mid+1;
//         }
//     }
//     return l;
// }
// int main(){
//     int n, f;
//     cin>>n>>f;
//     int max = 0;
//     for (int i = 0; i < n; i++)
//     {
//         int num;cin>>num;
//         v.push_back(num);
//         if(max<num){
//             max = num-1;
//         }
//     }
//     cout<<bst(f, 0, max);
    
// }
