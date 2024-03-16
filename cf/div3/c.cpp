#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, k;
    cin>>n>>m>>k;  
    set<int>s_1;
    set<int>s_2;
    map<int,int>mp;
    map<int,int>mp_1;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        if(num<=k){
            s_1.insert(num);
            mp[num]++;
        }
    }
    // 2 3 4 5 6
    // 1 3
    int temp = 0;
    for(int i = 0;i<m;i++){
        int num;cin>>num;
        if(num<=k && !mp[num]){
            s_2.insert(num);
        }
        else if(!mp_1[num] && mp[num]){
            temp++;
            mp_1[num]++;
        }
    }
    int sz = s_1.size();
    int sz_1 = s_2.size();
    while(temp && sz_1!=k/2){
        sz--;
        sz_1++;
        temp--;
    }
    if(sz==sz_1 && sz==k/2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}