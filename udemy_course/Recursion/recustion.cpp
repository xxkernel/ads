#include<iostream>
using namespace std;

void accending(int n){
    if(n>0){
        accending(n-1);
        cout<<n<<" ";
    }
}
void descending(int n){
    if(n>0){
        cout<<n<<" ";
        descending(n-1);
    }
}

int main(){
    int x = 3;
    accending(x);
    cout<<endl;
    descending(x);
}