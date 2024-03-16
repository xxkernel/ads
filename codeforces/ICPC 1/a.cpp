#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int num;cin>>num;
        if(num<=1399){
            cout<<"Division 4"<<endl;
        }
        else if(1400<=num && num<=1599){
            cout<<"Division 3"<<endl;
        }
        else if(1600<=num && num<=1899){
            cout<<"Division 2"<<endl;
        }
        else{
            cout<<"Division 1"<<endl;
        }
    }
}