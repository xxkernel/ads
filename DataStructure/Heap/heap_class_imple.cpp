// #include<bits/stdc++.h>
// using namespace std;

// const int N = (int)1e5 + 7;

// void heapify_up(int *a, int &n, int v){
//     while(v!=1 && a[v]>a[v/2]){
//         swap(a[v], a[v/2]);
//         v = v/2;
//     }
// }

// void push(int *a, int &n, int x){
//     n++;
//     a[n] = x;
//     heapify_up(a, n, n);
// }

// void heapify_down(int *a, int &n, int v){
//     int mx = v;
//     if(2*v<=n && a[mx]<a[2*v]){
//         mx = 2*v;
//     }
//     if(2*v+1<=n && a[mx]<a[2*v+1]){
//         mx = 2*v+1;
//     }
//     if(mx==v){
//         return;
//     }
//     swap(a[mx], a[v]);
//     heapify_down(a, n, mx);
// }

// void pop(int *a, int &n){
//     swap(a[1], a[n]);
//     n--;
//     heapify_down(a, n, 1);
// }

// void print(int *a, int n){
//     for(int i = 1;i<=n;i++){
//         cout<<a[i]<<" ";
//     }
// }

// int a[N];
// int main(){
//     int n = 0;
//     push(a, n, 2);
//     push(a, n, 3);
//     push(a, n, 12);
//     push(a, n, 4);
//     push(a, n, 122);
//     push(a, n, 0);
//     pop(a, n);
//     // pop(a, n);
//     print(a, n);
// }


#include<bits/stdc++.h>
using namespace std;

void heapify_up(vector<int>&v, int temp){
    while(temp!=0 && v[temp]>v[(temp-1)/2]){
        swap(v[temp], v[(temp-1)/2]);
        temp = (temp-1)/2;
    }
}

void push(vector<int>&v, int x){
    v.push_back(x);
    heapify_up(v, v.size()-1);
}

void heapify_down(vector<int>&v,int x){
    int mx = x;
    int temp = v.size()-1;
    if(2*x+1 <= temp && v[mx]<v[2*x+1]){
        mx = 2*x+1;
    }
    if(2*x+2<= temp && v[mx]<v[2*x+2]){
        mx = 2*x+2;
    }
    if(mx==x){
        return;
    }
    swap(v[mx], v[x]);
    heapify_down(v, mx);
}

void pop(vector<int>&v){
    swap(v[0], v[v.size()-1]);
    v.pop_back();
    heapify_down(v, 0);
}
int main(){
    vector<int>v;
    push(v, 2);
    push(v, 3);
    push(v, 12);
    push(v, 4);
    push(v, 122);
    push(v, 0);
    // pop(v);
    for(auto x:v){
        cout<<x<<" ";
    }
}