#include <iostream>
#include <vector>
#include <cmath>
#include <utility>

#define INF 2000000000

using namespace std;

void BuildTree(vector<pair<int, int>>& a) {
    int n = (1 << ((int)(log2(a.size() - 1)) + 1));
    a.resize(2 * n, make_pair(INF, 0));
    for (int i = n; i < 2 * n; i++)
        a[i] = a[i - n];
    for (int i = n - 1; i > 0; i--) {
        a[i].first = min(a[2 * i].first, a[2 * i + 1].first);
        a[i].second = max(a[2 * i].second, a[2 * i + 1].second);
    }
}

int MinMax(vector<pair<int, int>>& v, int l, int r) {
    int minRes = INF, maxRes = -INF;
    int n = v.size() / 2;
    l += n - 1, r += n - 1;
    while (l <= r) {
        if (l & 1) {
            minRes = min(minRes, v[l].first);
            maxRes = max(maxRes, v[l].second);
        }
        if (!(r & 1)) {
            minRes = min(minRes, v[r].first);
            maxRes = max(maxRes, v[r].second);
        }
        l = (l + 1) / 2;
        r = (r - 1) / 2;
    }
    return maxRes - minRes;
}

void update(vector<pair<int, int>>& v, int i, int x) {
    int n = v.size() / 2;
    i += n - 1;
    v[i] = make_pair(x, x);
    while (i /= 2) {
        v[i].first = min(v[2 * i].first, v[2 * i + 1].first);
        v[i].second = max(v[2 * i].second, v[2 * i + 1].second);
    }
}

int main() {
    vector<pair<int, int>> v;
    for (int i = 1; i <= 100000; i++) {
        int ai = (i * i) % 12345 + ((i * i) % 23456 * i) % 23456;
        v.push_back(make_pair(ai, ai));
    }

    BuildTree(v);

    int k, x, y;
    cin >> k;
    while (k--) {
        cin >> x >> y;
        if (x > 0)
            cout << MinMax(v, x, y) << endl;
        else
            update(v, -x, y);
    }

    return 0;
}
