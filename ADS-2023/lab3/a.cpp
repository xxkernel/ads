#include<bits/stdc++.h>
using namespace std;

int bst(vector<int>v, int x){
    int l = 0;
    int h = v.size()-1;
    int mid;
    while(l<=h){
        mid = (l+h)/2;
        if(v[mid]==x){
            return mid;
        }
        else if(v[mid]>x){
            h = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    return -1;
}
int main(){
    vector<int>v;
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        v.push_back(num);
    }
    int r,c;
    cin>>r>>c;
    vector<vector<int>>temp(r);
    for(int i = 0;i<r;i++){
        for(int j = 0;j<c;j++){
            int num;cin>>num;
            temp[i].push_back(num);
        }
        if(i%2==0){
            sort(temp[i].begin(), temp[i].end());
        }
    }
    for(int i = 0;i<v.size();i++){
        bool make = 0;
        for(int j = 0;j<temp.size();j++){
            if(bst(temp[j], v[i])!=-1){
                if(j%2==0){
                    cout<<j<<" "<<temp[j].size()-bst(temp[j], v[i])-1<<endl;
                    make = true;
                    break;
                }
                else{
                    cout<<j<<" "<<bst(temp[j], v[i])<<endl;
                    make = true;
                    break;
                }
            }
        }
        if(!make){
            cout<<-1<<endl;
        }
    }
}