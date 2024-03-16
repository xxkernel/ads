#include <bits/stdc++.h>
using ll = long long;
#define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
int nCr(int n, int r)
{
    // base case
    if (r > n)
        return 0;
 
    // C(n,r) = C(n,n-r)
    if (r > n - r)
        r = n - r;

 
    // array of elements from n-r+1 to n
    int arr[r];
 
    for (int i = n - r + 1; i <= n; i++) {
        arr[i + r - n - 1] = i;
    }
 
    long long ans = 1;
    // for numbers from 1 to r find arr[j],
    // such that gcd(i,arr[j])>1
    for (int k = 1; k < r + 1; k++) {
        int j = 0, i = k;
        while (j < r) {
            int x = gcd(i, arr[j]);
            if (x > 1) {
                // if gcd>1, divide both by gcd
                arr[j] /= x;
                i /= x;
            }
 
            // if i becomes 1, no need to search arr
            if (i == 1)
                break;
            j += 1;
        }
    }
 
    // single pass to multiply the numerator
    for (int i : arr)
        ans = (ans * i);
    return (int)ans;
}

void solve(vector<vector<long long>>dp){
    int n,k;
    cin>>n>>k;
    cout<<nCr(n, k)<<endl;
}

int main(){
    go
    vector<vector<long long>>dp;
    int n;
    cin >> n;
    while(n--){
        solve(dp);
    }
}