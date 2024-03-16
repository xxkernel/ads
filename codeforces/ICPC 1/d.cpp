#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int m;cin>>m;
        vector<char>v(m, 'W');
        vector<char>temp;
        while(m--){
            char a;cin>>a;
            temp.push_back(a);
        }
        if(temp.size()==1 && temp[0]!='W'){
            cout<<"NO"<<endl;
        }
        else{
            bool isTrue = 1;
            for(int i = 0;i<v.size();i++){
                if(temp[i]!='W'){
                    int r = 0;
                    int b = 0;
                    while(i<v.size() && temp[i]!='W'){
                        if(temp[i]=='R'){
                            r++;
                        }
                        else{
                            b++;
                        }
                        i++;
                    }
                    if(r==0 && b==0){
                        continue;
                    }
                    if(r==0 || b==0){
                        isTrue = 0;
                        cout<<"NO"<<endl;
                        break;
                    }
                }
            }
            if(isTrue){
                cout<<"YES"<<endl;
            }
        }
        
    }
}