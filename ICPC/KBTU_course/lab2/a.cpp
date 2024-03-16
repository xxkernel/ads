#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("perm.in", "r", stdin);
    freopen("perm.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
    }
    do {
        for (int i = 0; i < n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    } while (next_permutation(v.begin(), v.end()));
}
