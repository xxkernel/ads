#include<iostream>
using namespace std;

// By Reference:
    // void swap(int &a, int &b){
    //     int temp = a;
    //     a = b;
    //     b = temp;
    // }
    // int main(){
    //     int x = 10;
    //     int y = 5;
    //     swap(x,y);
    //     cout<<x<<" "<<y<<endl;
    // }


// By Value:
    // int add(int a, int b){
    //     return a+b;
    // }
    // int main(){
    //     int x = 10;
    //     int y = 5;
    //     cout<<add(x,y)<<endl;
    // }


// By Pointer(Address):
    // void swap(int *x, int *y){
    //     int temp = *x;
    //     *x = *y;
    //     *y = temp;
    // }

    // int main(){
    //     int a = 10;
    //     int b = 5;
    //     swap(&a,&b);
    //     cout<<a<<" "<<b;
    // }