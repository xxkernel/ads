#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int maxN = 2501;
const int maxM = 5001;
const ll INF = 0x3f3f3f3f3f3f3f3f;

struct Edge {
    int a, b; ll c;
};

int N, M, ptr, p[maxN];
ll dp[maxN];
Edge edges[maxM];

void solve() {
    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        ll a, b, c;
        cin >> a >> b >> c;
        edges[i] = {a, b, c};
    }

    ptr = -1;
    fill(dp+2, dp+N+1, INF);
    for (int iter = 0; iter < N && ptr; iter++) {
        ptr = 0;
        for (int i = 0; i < M; i++) {
            int u = edges[i].a;
            int v = edges[i].b;
            ll w = edges[i].c;

            if (dp[v] > dp[u] + w) {
                dp[v] = dp[u] + w;
                p[v] = u;
                ptr = v;
            }
        }
    }

    if (!ptr) {
        cout << "NO\n";
        return;
    }

    for (int i = 0; i < N; i++)
        ptr = p[ptr];

    vector<int> cycle;
    for (int v = ptr;; v = p[v]) {
        cycle.push_back(v);
        if (v == ptr && (int)cycle.size() > 1)
            break;
    }
    reverse(cycle.begin(), cycle.end());

    cout << "YES\n";
    int K = (int)cycle.size();
    for (int i = 0; i < K; i++)
        cout << cycle[i] << (" \n")[i == K - 1];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}
