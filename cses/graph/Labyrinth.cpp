// #include <bits/stdc++.h>
// using ll = long long;
// #define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
// using namespace std;

// int n, m;
// const int mxN = 1e5;
// vector<char> v[mxN];
// int sx, sy, fx, fy;
// vector<char> ans;

// bool e(int i, int j){
//     return (i >= 0 && i < n && j >= 0 && j < m && v[i][j] != '#');
// }

// void dfs(int i, int j){
//     if(i==fx && j==fy){
//         cout << "YES"<<endl;
//         cout<<ans.size()<<endl;
//         for(auto x:ans){
//             cout<<x;
//         }
//         exit(0);
//     }
//     v[i][j] = '#';
//     if(e(i+1, j)){
//         ans.push_back('D');
//         dfs(i+1, j);
//     }
//     if(e(i-1, j)){
//         ans.push_back('U');
//         dfs(i-1, j);
//     }
//     if(e(i, j+1)){
//         ans.push_back('R');
//         dfs(i, j+1);
//     }
//     if(e(i, j-1)){
//         ans.push_back('L');
//         dfs(i, j-1);
//     }
// }

// void solve(){
//     cin >> n >> m;
//     for(int i = 0; i < n; i++){
//         v[i].resize(m);
//         for(int j = 0; j < m; j++){
//             char ch; cin >> ch;
//             v[i][j] = ch;
//             if(ch == 'A'){
//                 sx = i;
//                 sy = j;
//             }
//             if(ch=='B'){
//                 fx = i;
//                 fy = j;
//             }
//         }
//     }
//     dfs(sx, sy);
//     cout<<"NO";
// }

// int main(){
//     go
//     solve();
// }


#include <bits/stdc++.h>

using namespace std;

#define ii pair<int, int>
#define f first
#define s second
#define mp make_pair

int n, m;
char A[1000][1000];
bool vis[1000][1000];

int previousStep[1000][1000];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
string stepDir = "URDL";

int main() {
	cin >> n >> m;

	queue<ii> q;
	ii begin, end;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
			if (A[i][j] == 'A') {
				begin = mp(i, j);
			} else if (A[i][j] == 'B') {
				end = mp(i, j);
			}
		}
	}

	q.push(begin);
	vis[begin.f][begin.s] = true;

	while (!q.empty()) {
		ii u = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			ii v = mp(u.f + dx[i], u.s + dy[i]);
			if (v.f < 0 || v.f >= n || v.s < 0 || v.s >= m) continue;
			if (A[v.f][v.s] == '#') continue;
			if (vis[v.f][v.s]) continue;
			vis[v.f][v.s] = true;
			previousStep[v.f][v.s] = i;
			q.push(v);
		}
	}

	if (vis[end.f][end.s]) {
		cout << "YES" << endl;
		vector<int> steps;
		while (end != begin) {
			int p = previousStep[end.f][end.s];
			steps.push_back(p);
			end = mp(end.f - dx[p], end.s - dy[p]);
		}
		reverse(steps.begin(), steps.end());

		cout << steps.size() << endl;
		for (char c : steps) { cout << stepDir[c]; }
		cout << endl;
	} else {
		cout << "NO" << endl;
	}

	return 0;
}