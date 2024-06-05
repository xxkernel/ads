#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int v[n][n];
    memset(v, 0, sizeof(v));
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        v[x][y] = 1;
    }
    bool isTrue = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && !(v[i][j] + v[j][i] != 1)) {
                isTrue = false;
                break;
            }
        }
        if (!isTrue) {
            break;
        }
    }
    isTrue ? cout << "YES" : cout << "NO";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}
