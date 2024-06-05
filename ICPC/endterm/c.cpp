#include <bits/stdc++.h>

using namespace std;

#define ii pair<int, int>
#define f first
#define s second
#define mp make_pair

int n;
char v[1000][1000];
bool vis[1000][1000];

int previousStep[1000][1000];

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
string stepDir = "URDL";

int stx, sty, ftx, fty;

int main() {
	cin >> n;

	queue<ii> q;
	ii begin, end;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> v[i][j];
			if (v[i][j] == 'X') {
                stx = i;
                sty = j;
				begin = mp(i, j);
                v[i][j] = '+';
			} else if (v[i][j] == '@') {
                ftx = i;
                fty = j;
				end = mp(i, j);
			}
		}
	}

	q.push(begin);
	vis[stx][sty] = true;

	while (!q.empty()) {
		ii u = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			ii t = mp(u.f + dx[i], u.s + dy[i]);
			if (t.f < 0 || t.f >= n || t.s < 0 || t.s >= n) continue;
			if (v[t.f][t.s] == 'O') continue;
			if (vis[t.f][t.s]) continue;
			vis[t.f][t.s] = true;
			previousStep[t.f][t.s] = i;
			q.push(t);
		}
	}

	if (vis[end.f][end.s]) {
		cout << "Y" << endl;
		vector<int> steps;
		while (end != begin) {
			int p = previousStep[end.f][end.s];
			steps.push_back(p);
			end = mp(end.f - dx[p], end.s - dy[p]);
		}
		reverse(steps.begin(), steps.end());

		for(char ch: steps){
            if(stepDir[ch]=='R'){
                v[stx][sty+1] = '+';
                sty = sty+1;
            }
            if(stepDir[ch]=='L'){
                v[stx][sty-1] = '+';
                sty = sty-1;
            }
            if(stepDir[ch]=='U'){
                v[stx-1][sty] = '+';
                stx = stx-1;
            }
            if(stepDir[ch]=='D'){
                v[stx+1][sty] = '+';
                stx = stx+1;
            }
        }
		for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                cout<<v[i][j];
            }
            cout<<endl;
        }
        
	} else {
		cout << "N" << endl;
	}

	return 0;
}