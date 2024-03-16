#include <iostream>
using ll = long long;
using namespace std;

int main(){
    freopen("king2.in", "r", stdin);
    freopen("king2.out", "w", stdout);
    int dp[8][8];
    int v[8][8];
    for(int i = 7; i >= 0; i--){
        for(int j = 0; j < 8; j++){
            cin >> v[i][j];
        }
    }
    dp[0][0] = v[0][0];
    for(int i = 1; i < 8; i++){
        dp[0][i] = v[0][i] + dp[0][i - 1];
        dp[i][0] = v[i][0] + dp[i - 1][0];
    }
    for(int i = 1; i < 8; i++){
        for(int j = 1; j < 8; j++){
            dp[i][j] = v[i][j] + min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]);
        }
    }
    cout << dp[7][7];
}
