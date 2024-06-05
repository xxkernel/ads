#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

const int MAX = 105;
int used[MAX];
double mas[MAX][MAX];
double d[MAX];

void solve(){
    int n, m;
    cin >> n >> m;
    memset(mas, 0, sizeof(mas));

    while(m--){
        int i, j, per;
        cin >> i >> j >> per;
        mas[i][j] = mas[j][i] = per / 100.0;
    }

    memset(used, 0, sizeof(used));
    memset(d, 0, sizeof(d));
    d[1] = 1;

    for(int i = 1; i < n; i++){
        double mx = 0;
        int w = 0;

        for(int j = 1; j <= n; j++){
            if (!used[j] && d[j] > mx) {
                mx = d[j];
                w = j;
            }
        }

        for(int j = 1; j <= n; j++){
            if (!used[j]) {
                d[j] = max(d[j], d[w] * mas[w][j]);
            }
        }

        used[w] = 1;
    }

    printf("%.6lf percent\n", d[n] * 100);
}

int main(){
    go
    solve();
    return 0;
}
