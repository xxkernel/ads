#include<bits/stdc++.h>
using namespace std;

void solve(){
    deque<int>dq;
    int m;cin>>m;
    for(int i = 0;i<m;i++){
        int num;cin>>num;
        dq.push_back(num);
    }
    int one = 0;
    int two = 0;
    int curr = 0;
    int round = 0;
    int one_eat = 0;
    int two_eat = 0;
    while(!dq.empty()){
        if(one==0){
            one+=dq.front();
            curr = dq.front();
            dq.pop_front();
            round++;
            if(dq.empty()){
                cout<<round<<" "<<one<<" "<<two<<endl;
                return;
            }
        }
        while(two_eat<=curr){
            if(dq.empty()){
                round++;
                cout<<round<<" "<<one<<" "<<two<<endl;
                return;
            }
            two_eat+=dq.back();
            two+=dq.back();
            dq.pop_back();
            if(dq.empty()){
                round++;
                cout<<round<<" "<<one<<" "<<two<<endl;
                return;
            }
        }
        //  3 1 4 1 5 9 2 6 5 3 5
        round++;
        curr = two_eat;
        two_eat = 0;
        while(one_eat<=curr){
            if(dq.empty()){
                round++;
                cout<<round<<" "<<one<<" "<<two<<endl;
                return;
            }
            one_eat+=dq.front();
            one+=dq.front();
            dq.pop_front();
            if(dq.empty()){
                round++;
                cout<<round<<" "<<one<<" "<<two<<endl;
                return;
            }
        }
        curr = one_eat;
        one_eat = 0;
        round++;
    }
    cout<<round<<" "<<one<<" "<<two<<endl;
}

int main(){
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        solve();
    }
}