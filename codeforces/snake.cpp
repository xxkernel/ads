#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(10000000);
    int cnt = 1;
    for(int i = 1;i<=n;i++){
        int num;cin>>num;
        while(num--){
            v[cnt] = i;
            cnt++;
        }
    }
    int m;cin>>m;
    for(int i = 0;i<m;i++){
        int num;cin>>num;
        cout<<v[num]<<endl;
    }
}