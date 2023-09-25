#include<iostream>
using namespace std;

int main(){
    int a[5] = {1,2,3,4,5};
    int *p = new int[5];

    delete []p;
}