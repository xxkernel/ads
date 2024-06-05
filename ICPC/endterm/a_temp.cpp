#include "bits/stdc++.h"
using namespace std;

#define all(x) x.begin(),x.end()
#define mp make_pair
typedef long long ll;
typedef pair<int,int> pii;
//bubb
void solve() {
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n; cin >> n;
    ll res = 0, rodd = 0, fodd = 0, even = 0;
    bool was = false;
    for(int i = 0; i < n; ++i) {
        int x, y; cin >> x >> y;
        if(x % 2 == 1 && y % 2 == 1) {
            rodd++;
        }
        else if(x % 2 == 1 || y % 2 == 1) {
            was = true;
            fodd++;
        }
        else even++;
    }

    if(was) {
        rodd += fodd - 1;
    } else if (rodd % 2 == 0){
        cout << 0;
        return 0;
    }
    res += pow(2, rodd);
    res *= pow(2, even);
    cout << res;
}