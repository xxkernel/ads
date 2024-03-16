#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    vector<bool> taken(n + 1, false);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> result;

    for (int i = 0; i < n; i++) {
        int adjusted_value = a[i] + i + 1;
        if (taken[adjusted_value]) {
            for (int j = adjusted_value - 1; j >= 1; j--) {
                if (!taken[j]) {
                    adjusted_value = j;
                    break;
                }
            }
        }
        result.push_back(adjusted_value);
        taken[adjusted_value] = true;
    }

    for (int num : result) {
        cout << num << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
