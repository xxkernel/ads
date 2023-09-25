#include<bits/stdc++.h>
using namespace std;

int bst(int a[], int x, int l, int h){
    int mid;
    while(l<=h){
        mid = (h+l)/2;
        if(a[mid]==x){
            return mid;
        }
        if(a[mid]>x){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return l;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    // int *a = new int(n);
    int a[n];
    for(int i = 0; i<n;i++){
        cin>>a[i];
        if(i!=0){
            a[i]+=a[i-1];
        }
    }
    // for(int i = 0;i<n;i++){
    //     int num;cin>>num;
    //     v.push_back(num);
    //     if(i!=0){
    //         v[i]+=v[i-1];
    //     }
    // }
    // for (int i = 1; i < n; i++)
    // {
    //     v[i]+=v[i-1];
    // }
    for (int i = 0; i < m; i++)
    {
        int num;cin>>num;
        cout<<bst(a, num, 0, n-1)+1<<endl;
    }
}