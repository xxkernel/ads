#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main(){
    // int a = 5;
    // int *p;
    // p = &a;
    // cout<<*p;

    int *p;
    p = new int[5];
    // int n;
    // cin>>n;            it's like that
    // int *a = new int[n];
    p=(int * )malloc(5*sizeof(int));  //for C
    p = new int[5];   //for C++
    p[0] = 10; p[1] = 15; p[2] = 20; p[3] = 25; p[4] = 30;
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<" ";
    }

    delete [ ] p;
}