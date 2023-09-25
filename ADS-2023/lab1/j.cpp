#include<bits/stdc++.h>
using namespace std;

int main(){
    deque<int>dq;
    char s;
    int n;
    while(true){
        cin>>s;
        if(s=='+'){
            cin>>n;
            dq.push_front(n);
        }
        if(s=='-'){
            cin>>n;
            dq.push_back(n);
        }
        if(s=='*'){
            if(dq.size()==1){ 
                cout<<dq.front()*2<<endl;
                dq.pop_back();
            }
            else if(dq.size()>1){
                cout<<dq.front()+dq.back()<<endl;
                dq.pop_back();
                dq.pop_front();
            }
            else{
                cout<<"error"<<endl;;
            }
        }
        if(s=='!'){
            return 0;
        }
    }
    return 0;

    // + 1
    // - 9
    // + 2
    // *        11
    // + 2      2 1
    // - 6      2 1 6
    // + 3      3 2 1 6
    // - 9      3 2 1 6 9
    // *        12
    // *        8
    // *        2
    // *        error
    // !
}