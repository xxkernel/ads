#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    int m; cin >> m;
    for(int i = 0; i < m; ++i) {
        int l, r;
        cin >> l >> r;
        unordered_map<int, int> index;
        bool found = false;
        for(int j = l - 1; j < r; ++j) {
            if(index.find(v[j]) != index.end()) {
                cout << index[v[j]] + 1 << " " << j + 1 << endl;
                found = true;
                break;
            }
            index[v[j]] = j;
        }
        if (!found) {
            cout << -1 << " " << -1 << endl;
        }
    }
}

int main(){
    int n;cin>>n;
    while(n--){
        solve();
    }
}