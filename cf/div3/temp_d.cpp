#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> last_occurrence;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i) {
        int l, r;
        cin >> l >> r;
        --l;
        --r;

        int i_index = -1, j_index = -1;

        for (int j = l; j < r; ++j) {
            if (a[j] != a[j + 1]) {
                i_index = j + 1 + 1;
                j_index = j + 2 + 1;
                break;
            }
        }

        cout << i_index << " " << j_index << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
