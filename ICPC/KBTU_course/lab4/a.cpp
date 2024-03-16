#include <iostream>
#include <vector>

using namespace std;

vector<long long> tree;

void build(const vector<int>& arr, int v, int tl, int tr) {
    if (tl == tr) {
        tree[v] = arr[tl];
    } else {
        int tm = (tl + tr) / 2;
        build(arr, v * 2, tl, tm);
        build(arr, v * 2 + 1, tm + 1, tr);
        tree[v] = tree[v * 2] + tree[v * 2 + 1];
    }
}

long long sum(int v, int tl, int tr, int l, int r) {
    if (l > r)
        return 0;
    if (l == tl && r == tr) {
        return tree[v];
    }
    int tm = (tl + tr) / 2;
    return sum(v * 2, tl, tm, l, min(r, tm))
           + sum(v * 2 + 1, tm + 1, tr, max(l, tm + 1), r);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    tree.resize(4 * n);
    build(arr, 1, 0, n - 1);

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << sum(1, 0, n - 1, a - 1, b - 1) << "\n";
    }

    return 0;
}
