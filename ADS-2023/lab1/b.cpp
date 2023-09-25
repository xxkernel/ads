#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main(){
    int n;cin>>n;
    stack<int>st;
    st.push(-1);
    for(int i = 0;i<n;i++){
        int num;cin>>num;
        while(st.top()!=-1 && st.top()>num){
            st.pop();
        }
        cout<<st.top()<<" ";
        st.push(num);
    }
}