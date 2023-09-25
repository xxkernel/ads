#include<bits/stdc++.h>
using namespace std;

// void solve(){
//     int num;cin>>num;
//     int one = 0, two = 0, three = 0;
//     vector<vector<string>>v(3);
//     string s;
//     for(int i = 0;i<3;i++){
//         for(int j = 0;j<num;j++){
//             cin>>s;
//             v[i].push_back(s);
//         }
//     }

//     for(int i = 0;i<v.size();i++){
//         for(int j = 0;j<v[i].size();j++){
//             int cnt = 0;
//             for(int k = 0;k<v.size();k++){
//                 if(k!=i){
//                     for(int q = 0;q<v[k].size();q++){
//                         if(v[i][j]==v[k][q]){
//                             cnt++;
//                             break;
//                         }
//                     }
//                 }
//             }
//             if(i==0){
//                 if(cnt==1){
//                     one++;
//                 }
//                 if(cnt==0){
//                     one+=3;
//                 }
//             }
//             if(i==1){
//                 if(cnt==1){
//                     two++;
//                 }
//                 if(cnt==0){
//                     two+=3;
//                 }
//             }
//             if(i==2){
//                 if(cnt==1){
//                     three++;
//                 }
//                 if(cnt==0){
//                     three+=3;
//                 }
//             }
//         }
//     }
//     cout<<one<<" "<<two<<" "<<three<<endl;
// }

void solve(){
    map<string, int>mp;
    vector<vector<string>>v(3);
    int num;cin>>num;
    string s;
    for(int i = 0;i<3;i++){
        for(int j = 0;j<num;j++){
            cin>>s;
            v[i].push_back(s);
            mp[s]++;
        }
    }
    for(int i = 0;i<v.size();i++){
        int ans = 0;
        for(int j = 0;j<v[i].size();j++){
            if(mp[v[i][j]]==1){
                ans+=3;
            }
            else if(mp[v[i][j]]==2){
                ans++;
            }
        }
        cout<<ans<<" ";
    }
    cout<<endl;
}

int main(){
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        solve();
    }
}