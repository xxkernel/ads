#include<bits/stdc++.h>
using namespace std;

void combinations(vector<int>& v, int n, int k, int start) {
    if (k == 0) {
        for (int num : v) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    for (int i = start; i <= n; ++i) {
        v.push_back(i);
        combinations(v, n, k - 1, i + 1);
        v.pop_back();
    }
}

int main() {
    freopen("choose.in", "r", stdin);
    freopen("choose.out", "w", stdout);

    int n, k;
    cin>>n>>k;
    vector<int>v;
    combinations(v, n, k, 1);

    return 0;
}
