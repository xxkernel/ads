#include<bits/stdc++.h>
using namespace std;
function<void(void)> ____ = [](){ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);};
const int MAXN = 1e5+7;
int n,m,k,pre,ord[MAXN],cur,deg[MAXN];
vector<int> G[MAXN];
set<int> S;
set<int,greater<int>> done;
vector<pair<int,int>> edge;
void toposort(int u){
    ord[++cur] = u;
    pre = u;
    for(int v : G[u]) if(--deg[v]==0) S.insert(v);
}
int main(){
    #ifdef ONLINE_JUDGE
    #endif
    scanf("%d %d %d",&n,&m,&k);
    for(int i = 1; i <= m; i++){
        int u, v;
        scanf("%d %d",&u,&v);
        G[u].emplace_back(v);
        deg[v]++;
    }
    for(int i = 1; i <= n; i++) if(deg[i]==0) S.insert(i);
    while(cur<n){
        if(S.empty()){          
            int u = *done.begin();
            done.erase(u);
            edge.emplace_back(make_pair(pre,u));
            toposort(u);
        }
        else if(!k||(S.size()==1&&(done.empty()||*S.begin()>*done.begin()))){
            int u = *S.begin();
            S.erase(u);
            toposort(u);
        }
        else{
            k--;
            done.insert(*S.begin());
            S.erase(S.begin());
        }
    }
    for(int i = 1; i <= n; i++) printf("%d ",ord[i]); puts("");
    printf("%d\n",edge.size());
    for(auto p : edge) printf("%d %d\n",p.first,p.second);
    return 0;
}
