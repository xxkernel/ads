#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> b;
    queue<int> n;
    int cnt = 0;
    for(int i = 0;i<5;i++){
        int num;cin>>num;
        b.push(num);
    }
    for(int i = 0;i<5;i++){
        int num;cin>>num;
        n.push(num);
    }
    while(true){
        if(cnt==1000000){
            cout<<"blin nichya";
            return 0;
        }
        if(n.empty()){
            cout<<"Boris "<<cnt;
            return 0;
        }
        else if(b.empty()){
            cout<<"Nursik "<<cnt;
            return 0;
        }
        if(b.front()==9 && n.front()==0){
            n.push(b.front());
            n.push(n.front());
            b.pop();
            n.pop();
            cnt++;
        }
        else if(b.front()==0 && n.front()==9){
            b.push(b.front());
            b.push(n.front());
            b.pop();
            n.pop();
            cnt++;
        }
        else if(b.front()>n.front()){
            b.push(b.front());
            b.push(n.front());
            b.pop();
            n.pop();
            cnt++;
        }
        else{
            n.push(b.front());
            n.push(n.front());
            b.pop();
            n.pop();
            cnt++;
        }
    }
}