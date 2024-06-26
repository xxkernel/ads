#include <bits/stdc++.h>

using namespace std;
const int maxN = 1e5;

int N, M, a, b, components, largest, ds[maxN+1];

int find(int u){
    if(ds[u] < 0)   return u;
    ds[u] = find(ds[u]);
    return ds[u];
}

bool merge(int u, int v){
    u = find(u); v = find(v);
    if(u == v)  return false;
    if(ds[u] < ds[v])   swap(u, v);
    ds[v] += ds[u];
    ds[u] = v;
    return true;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;
    fill(ds+1, ds+N+1, -1);

    components = N;
    largest = 1;
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        if(merge(a, b)){
            components--;
            largest = max(largest, -ds[find(a)]);
        }
        cout << components << " " << largest << "\n";
    }

    return 0;
}
