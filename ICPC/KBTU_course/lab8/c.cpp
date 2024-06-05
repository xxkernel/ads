#include "bits/stdc++.h"
using namespace std;

#define all(x) x.begin(),x.end()
#define mp make_pair

typedef long long ll;
typedef pair<int, int> pii;

void bridge(int x, int &t, vector<vector<int>> &v, vector<int> &tin, vector<int> &low,
            vector<bool> &was, vector<pii> &res, int p = -1) {
    was[x] = true;
    tin[x] = low[x] = ++t;
    for (int i = 0; i < v[x].size(); ++i) {
        int ngb = v[x][i];
        if (ngb == p) continue;
        if (was[ngb]) {
            low[x] = min(low[x], low[ngb]);
        } else {
            bridge(ngb, t, v, tin, low, was, res, x);
            low[x] = min(low[x], low[ngb]);
            if (low[ngb] > tin[x]) {
                pii pp;
                if (x > ngb)
                    pp = mp(ngb, x);
                else
                    pp = mp(x, ngb);
                res.push_back(pp);
            }
        }
    }
}

void solve(int t) {
    int n;
    cin >> n;
    vector<vector<int>> v(n, vector<int>());
    for (int i = 0; i < n; ++i) {
        int u, buba;
        cin >> u;
        char c;
        cin >> c >> buba >> c;
        for (int j = 0; j < buba; ++j) {
            int to;
            cin >> to;
            v[u].push_back(to);
        }
    }

    int time = 0;
    vector<bool> was(n);
    vector<int> tin(n), low(n);
    vector<pii> res;
    for (int i = 0; i < n; ++i) {
        if (!was[i]) {
            bridge(i, time, v, tin, low, was, res);
        }
    }

    sort(all(res));
    int len = res.size();
    cout << "Case " << t << ":\n" << len << " critical links\n";
    for (int i = 0; i < len; ++i) {
        cout << res[i].first << " - " << res[i].second << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; ++i) {
        solve(i);
    }
}
