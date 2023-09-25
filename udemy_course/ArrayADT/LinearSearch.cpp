#include<iostream>
using namespace std;

int LinearSearch(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        if (n==a[i])
        {
            return i;
        }
        
    }
    return -1;   
}
int main(){
    int n;
    cin>>n;
    int a[] = {1,2,3,4,5};
    cout<<LinearSearch(a,n);
}