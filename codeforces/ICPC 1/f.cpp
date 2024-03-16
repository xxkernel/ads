#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int m;cin>>m;
        deque<int>dq;
        for(int i = 0;i<m;i++){
            int num;cin>>num;
            dq.push_back(num);
        }
        int cnt = 0;
        int alice = 0;
        int bob = 0;
        int left = 0;
        int right = dq.size()-1;
        int temp = 0;
        while(left<=right){
            if(left==0){
                alice+=dq[left];
                left++;
                temp++;
            }
            else if(alice>bob){
                bob+=dq[right];
                right--;
                temp++;
            }
            else if(alice<=bob){
                alice+=dq[left];
                left++;
                temp++;
            }
            if(alice==bob){
                cnt = temp;
            }
        }
        cout<<cnt<<endl;
    }
}