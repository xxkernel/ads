// #include<bits/stdc++.h>
// using namespace std;

// map<int, vector<int>> mp;

// void combinations(vector<int>& v, int n, int k, int start, int m) {
//     if (k == 0) {
//         for(auto x: v) {
//             mp[m].push_back(x);
//         }
//         return;
//     }
//     for (int i = start; i <= n; ++i) {
//         v.push_back(i);
//         combinations(v, n, k - 1, i + 1, m);
//         v.pop_back();
//     }
// }

// int main() {
//     int n, k, m;
//     cin >> n >> k >> m;
//     vector<int> v;
//     combinations(v, n, k, 1, 0);
//     for(auto x: mp[m]) {
//         cout << x << " ";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
int n, k, m;
void solve(vector<bool>boo){
    int v[k];
    int index = 0;
    for(int i =0;i<n;i++){
        if(boo[i]){
            v[index+1] = i+1;
            index++;
        }
    }
    if(next_permutation())
}
int main(){
    cin>>n>>k>>m;
    vector<bool>boo(n, 0);
    for(int i = n-1;i>n-1-i;i--){
        boo[i] = 1;
    }
}   