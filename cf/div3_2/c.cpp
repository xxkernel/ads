
#include <vector>
#include <iostream>

using namespace std;

#define pb push_back
#define mp make_pair
#define mt make_tuple
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define endl "\n"
#define INF 1'000'000'000 //1e9
#define sz() size()
#define ll long long
#define llu long long unsigned
#define dbg(x) cout << (#x) << " = " << (x) << endl;
#define dbg_time() cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";
#define unisort(c) (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))
#define unires(x) x.resize(unique(all(x)) - x.begin())

template<typename T> ostream &operator << (ostream &o, vector<T>& v) { string s; for (T i : v) o << s << i, s = " "; return o; }
template<typename T> istream &operator >> (istream &o, vector<T>& v) {for (T &i : v) cin >> i; return o;}

class SegmentTree {
private:
    vector<long long> tree;
    vector<long long> lazy;
    vector<long long> arr;
    int MOD;

    void buildTree(int node, int start, int end) {
        if (start == end) {
            tree[node] = arr[start];
        } else {
            int mid = (start + end) / 2;
            buildTree(2 * node, start, mid);
            buildTree(2 * node + 1, mid + 1, end);
            tree[node] = (tree[2 * node] * tree[2 * node + 1]) % MOD;
        }
    }

    void lazyUpdate(int node, int start, int end) {
        if (lazy[node] != 1) {
            tree[node] = (tree[node] * lazy[node]) % MOD;
            if (start != end) {
                lazy[2 * node] = (lazy[2 * node] * lazy[node]) % MOD;
                lazy[2 * node + 1] = (lazy[2 * node + 1] * lazy[node]) % MOD;
            }
            lazy[node] = 1;
        }
    }

    long long queryRange(int node, int start, int end, int l, int r) {
    lazyUpdate(node, start, end);
    if (start > end || start > r || end < l) return 1;
    if (start >= l && end <= r) return tree[node] % MOD; // Применение модуля
    int mid = (start + end) / 2;
    long long p1 = queryRange(2 * node, start, mid, l, r);
    long long p2 = queryRange(2 * node + 1, mid + 1, end, l, r);
    return (p1 * p2) % MOD; // Применение модуля
}

    void updateRange(int node, int start, int end, int l, int r, long long val) {
        lazyUpdate(node, start, end);
        if (start > end || start > r || end < l) return;
        if (start >= l && end <= r) {
            tree[node] = (tree[node] * val) % MOD;
            if (start != end) {
                lazy[2 * node] = (lazy[2 * node] * val) % MOD;
                lazy[2 * node + 1] = (lazy[2 * node + 1] * val) % MOD;
            }
            return;
        }
        int mid = (start + end) / 2;
        updateRange(2 * node, start, mid, l, r, val);
        updateRange(2 * node + 1, mid + 1, end, l, r, val);
        tree[node] = (tree[2 * node] * tree[2 * node + 1]) % MOD;
    }

public:
    SegmentTree(const vector<long long>& input, int m) {
        arr = input;
        MOD = m;
        int n = input.size();
        tree.resize(4 * n);
        lazy.resize(4 * n, 1);
        buildTree(1, 0, n - 1);
    }

    long long query(int l, int r) {
        return queryRange(1, 0, arr.size() - 1, l, r);
    }

    void update(int l, int r, long long val) {
        updateRange(1, 0, arr.size() - 1, l, r, val);
    }
};

void solve(){
    int n, m;
    cin >> n >> m;
    vector<long long> a(n, 0);
    for(int i=0; i<n; i++) cin >> a[i];

    string s;
    cin >> s;

    SegmentTree st(a, m);

    int l = 0, r = n-1;

    for(int i=0; i<n; i++){
        cout << st.query(l, r) << " ";
        if(s[i] == 'L'){
           l++;
        }else{
            if(s[i] == 'R'){
                r--;
            }
        }
    }

    cout << endl;
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}