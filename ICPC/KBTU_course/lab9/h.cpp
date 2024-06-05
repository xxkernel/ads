#include <iostream>
#include <cstring>

using namespace std;

#define MAX 110
#define INF 0x3F3F3F3F

int mas[MAX][MAX], used[MAX], d[MAX], cost[MAX];

void Relax(int i, int j) {
    if (d[i] + mas[i][j] < d[j])
        d[j] = d[i] + mas[i][j];
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, a, b;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> cost[i];

    memset(mas, 0x3F, sizeof(mas));
    memset(used, 0, sizeof(used));

    cin >> m;
    for (int i = 1; i <= m; i++) {
        cin >> a >> b;
        mas[a][b] = cost[a];
        mas[b][a] = cost[b];
    }

    memset(d, 0x3F, sizeof(d));
    d[1] = 0;

    for (int i = 1; i < n; i++) {
        int minDist = INF, w = -1;
        for (int j = 1; j <= n; j++)
            if (!used[j] && d[j] < minDist) {
                minDist = d[j];
                w = j;
            }

        if (w < 0)
            break;

        for (int j = 1; j <= n; j++)
            if (!used[j])
                Relax(w, j);

        used[w] = 1;
    }

    if (d[n] == INF)
        cout << "-1\n";
    else
        cout << d[n] << endl;

    return 0;
}
