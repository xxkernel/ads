#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, ll> edge;
typedef pair<ll, int> node;

const int maxN = 2e5 + 1;

int N, M, K, cnt[maxN];
vector<edge> G[maxN];
priority_queue<node, vector<node>, greater<node>> Q;

void solve() {
    cin >> N >> M >> K;
    for (int i = 0, a, b, c; i < M; i++) {
        cin >> a >> b >> c;
        G[a].push_back({b, c});
    }

    Q.push({0, 1});
    while (!Q.empty()) {
        ll d = Q.top().first;
        int u = Q.top().second;
        Q.pop();

        cnt[u]++;
        if (u == N) {
            cout << d << (" \n")[cnt[u] == K];
            if (cnt[u] == K) return;
        }

        if (cnt[u] <= K) {
            for (edge e : G[u]) {
                int v = e.first;
                ll w = e.second;
                Q.push({d + w, v});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    solve();

    return 0;
}
