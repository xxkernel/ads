#include<iostream>
using namespace std;

// void fun(int *a, int n){
//     a[0] = 15;
// }

// int main(){
//     int a[] = {2,4,6,8,10};
//     int n = 5;
//     fun(a,n);
//     for(int x:a){
//         std::cout<<x<<" ";
//     }
// }


int * fun(int size){
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i+1;
    }
    
    return p;
}

int main(){
    int *ptr, sz=5;
    ptr=fun(sz);
    for (int i = 0; i < sz; i++)
    {
        std::cout<<ptr[i]<<endl;
    }
    
}