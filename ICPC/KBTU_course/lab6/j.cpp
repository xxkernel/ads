#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

string s[2];
int n,k;
bool a[2][100005];
void dfs(int x,int y,int h){
    if(s[x][y]!='-' || y<h || a[x][y])
    {
        return;
    }
    if(y+k>=n)
    {
        cout<<"YES\n";
        exit(0);
    }
    a[x][y]=true;
    dfs((x+1)%2,y+k,h+1);
    dfs(x,y+1,h+1);
    dfs(x,y-1,h+1);
}

int main(){
    cin >> n >> k >> s[0] >> s[1];
    dfs(0,0,0);
    cout<<"NO\n";
    return 0;
} 