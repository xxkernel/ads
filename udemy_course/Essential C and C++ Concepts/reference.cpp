#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &r = a;
    cout<<a<<endl;
    r++;
    cout<<a<<endl;
    r = 25;
    cout<<a<<endl;
    int b = 30;
    r = b;
    cout<<a<<endl;
}