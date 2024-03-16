#include<bits/stdc++.h>
using namespace std;

map<int, vector<int>> mp;

void combinations(vector<int>& v, int n, int k, int start, int m) {
    if (k == 0) {
        for(auto x: v) {
            mp[m].push_back(x);
        }
        return;
    }
    for (int i = start; i <= n; ++i) {
        v.push_back(i);
        combinations(v, n, k - 1, i + 1, m);
        v.pop_back();
    }
}

int main() {
    int n, k, m;
    cin >> n >> k >> m;
    vector<int> v;
    combinations(v, n, k, 1, 0);
    for(auto x: mp[m]) {
        cout << x << " ";
    }
    return 0;
}
