#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> a, int key){
    int l = 0;
    int h = a.size()-1;
    int mid;
    while(l<=h){
        mid = (l+h)/2;
        if(key==a[mid]){
            return mid;
        }
        else if(key>a[mid]){
            l = mid+1;
        }
        else{
            h = mid-1;
        }
    }
    return -1;
}

int main(){
    vector<int> a{1,3,5,7,9,11};
    int key;
    cin>>key;
    cout<<BinarySearch(a,key);
}