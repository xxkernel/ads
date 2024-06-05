#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

void solve(){
    string s;
	cin >> s;
	for (int i = 0; i < (int)s.size() - 1; i++) {
		if (s[i] != s[i + 1]) {
			cout << "YES\n";
			swap(s[i], s[i + 1]);
			cout << s << "\n";
			return;
		}
	}
	cout << "NO\n";
}

int main(){
    go
    int n;
    cin >> n;
    while(n--){
        solve();
    }
}