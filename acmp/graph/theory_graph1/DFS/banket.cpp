#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> g;
vector<int> colors;
vector<int> ans;

bool dfs(int v, int color) {
    colors[v] = color;
    ans.push_back(v);

    for (int r : g[v]) {
        if (colors[r] == color)
            return false; // Not bipartite
        if (colors[r] == 0 && !dfs(r, -color))
            return false; // Not bipartite
    }

    return true; // Bipartite
}

int main() {
    int n, m;
    cin >> n >> m;

    g.resize(n);
    colors.assign(n, 0);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        g[a - 1].push_back(b - 1);
        g[b - 1].push_back(a - 1);
    }

    for (int i = 0; i < n; i++) {
        if (colors[i] == 0 && !dfs(i, 1)) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
