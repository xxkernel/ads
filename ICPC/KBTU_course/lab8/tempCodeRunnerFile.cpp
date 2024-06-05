#include<bits/stdc++.h>
using namespace std;
#define P pair<int,int>
const int MAXN = 1e5+10;
struct EDGE {
    int v, next;
} e[MAXN];
int n, m, cnt, tot;
int head[MAXN], low[MAXN], dfn[MAXN];
int father[MAXN];
bool is_cut[MAXN];

void init() {
    for(int i = 0; i <= n; i++) {
        head[i] = low[i] = dfn[i] = -1;
        father[i] = 0;
        is_cut[i] = false;
    }
    cnt = tot = 0;
}

void addedge(int u, int v) {
    e[cnt].next = head[u];
    e[cnt].v = v;
    head[u] = cnt++;
}

void dfs(int x, int pre) {
    father[x] = pre;
    dfn[x] = low[x] = ++tot;
    for (int i = head[x]; ~i; i = e[i].next) {
        int v = e[i].v;
        if (dfn[v] == -1) {
            dfs(v, x);
            low[x] = min(low[x], low[v]);
        } else if (pre != v)
            low[x] = min(low[x], dfn[v]);
    }
}

bool cmp(P t, P v) {
    if (t.first == v.first) return t.second < v.second;
    return t.first < v.first;
}

int main() {
    while (~scanf("%d", &n)) {
        init();
        for (int i = 1; i <= n; i++) {
            int x, m;
            scanf("%d (%d)", &x, &m);
            while (m--) {
                int y;
                scanf("%d", &y);
                addedge(x + 1, y + 1);
                addedge(y + 1, x + 1);
            }
        }
        for (int i = 1; i <= n; i++)
            if (dfn[i] == -1) dfs(i, 0);

        vector<pair<int, int>> ve;
        for (int i = 1; i <= n; i++) {
            int temp = father[i];
            if (temp > 0 && low[i] > dfn[temp]) {
                if (temp > i)
                    ve.push_back(make_pair(i, temp));
                else
                    ve.push_back(make_pair(temp, i));
            }
        }
        sort(ve.begin(), ve.end(), cmp);
        cout << ve.size() << " critical links" << endl;
        for (int i = 0; i < ve.size(); i++)
            cout << ve[i].first - 1 << " " << ve[i].second - 1 << endl;
    }
    return 0;
}
