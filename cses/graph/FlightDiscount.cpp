#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,ll> edge;
const int maxN = 2e5+1;

int N, M, a, b;
ll c, dist[2][maxN];
vector<edge> G[maxN];
priority_queue<tuple<ll,int,int>, vector<tuple<ll,int,int>>, greater<tuple<ll,int,int>>> Q;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    cin >> N >> M;
    memset(dist, 0x3f, sizeof(dist));
    for(int i = 0; i < M; i++){
        cin >> a >> b >> c;
        G[a].push_back({b, c});
    }

    dist[0][1] = dist[1][1] = 0;
    Q.push({0, 1, 1});
    while(!Q.empty()){
        ll d = get<0>(Q.top());
        int u = get<1>(Q.top());
        int coupon = get<2>(Q.top());
        Q.pop();

        if(dist[!coupon][u] < d)    continue;

        for(edge e : G[u]){
            int v = e.first;
            ll w = e.second;

            if(coupon){
                if(dist[0][v] > d + w){
                    dist[0][v] = d + w;
                    Q.push({d+w, v, 1});
                }
                if(dist[1][v] > d + w/2){
                    dist[1][v] = d + w/2;
                    Q.push({d+w/2, v, 0});
                }
            } else {
                if(dist[1][v] > d + w){
                    dist[1][v] = d + w;
                    Q.push({d+w, v, 0});
                }
            }
        }
    }

    cout << min(dist[0][N], dist[1][N]) << "\n";
}
