#include<iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
} //r1,r2,r3
;

// struct Rectangle r1,r2,r3;

int main(){
    struct Rectangle r1={10,5};
    cout<<sizeof(r1)<<endl;
    cout<<r1.length<<endl;
    cout<<r1.breadth<<endl;
    r1.length = 7;
}