#include <iostream>

using namespace std;
const int N = (int)1e5+5;
typedef long long ll;
int n;
ll t[4 * N];

void build(int v, int l, int r) {
    if (l == r)
        t[v] = 0; // = a[l];
    else {
        int mid = (l+r)/2;
        build(v+v,l,mid);
        build(v+v+1,mid+1,r);
        t[v] = t[2*v] + t[2*v+1];
    }
}

void update(int v, int l, int r, int i, int x) {
    if (l == r) {
        t[v] = x;
    } else {
        int mid = (l + r) / 2;
        if (i <= mid)
            update(v+v,l,mid,i,x);
        else
            update(v+v+1,mid+1,r,i,x);
        t[v] = t[2*v] + t[2*v+1];
    }
}

ll get(int v, int l, int r, int ql, int qr) {
    if (qr < l || r < ql)
        return 0;
    if (ql <= l && r <= qr)
        return t[v];
    int mid = (l+r)/2;
    return get(v+v,l,mid,ql,qr) 
        + get(v+v+1,mid+1,r,ql,qr);
}

int main () {
    int q;
    scanf("%d %d\n", &n,&q);

    for (int i = 1; i <= q; i++) {
        char c;
        int L, R;
        scanf("%c %d %d\n", &c, &L, &R);
        // printf("")
        if (c == 'A') {
            update(1,1,n,L, R); // i, x
        } else {
            cout << get(1,1,n,L,R) << endl;
        }
    }


    return 0;
}
