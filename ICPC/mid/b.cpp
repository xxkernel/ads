// #include <bits/stdc++.h>
// using ll = long long;
// #define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
// using namespace std;

// void solve(){
//     // int n;cin>>n;
//     // int dp[n];
//     // dp[0] = 7;
//     // dp[1] = 11;
//     // for(int i = 2;i<n;i++){
//     //     if(i%2==0){
//     //         dp[i] = dp[i-1]+6;
//     //     }
//     // }
//     // for(int i = 1;i<n;i+=8){
//     //     dp[i] = dp[i-1]+534;
//     // }

//     // cout<<dp[n-1];
//     int n;
//     cin>>n;
//     // 7 11 17 71 77 111 117 171 177 711 717 771 777 
//     // 1111 1117 1171 1177 1711 1717 1771 1777 7111 7117 7171 7177 7711 7717 7771 7777
//     vector<int>v;
//     while(n!=0){
//         if(v.size()==0){
//             v.push_back(1);
//             n--;
//         }
//         bool isTrue = 0;
//         do{
//             if(n==0){
//                 for(int i = 0;i<v.size();i++){
//                     cout<<v[i];
//                 }
//             }
//             n--;
//         }while(next_permutation(v.begin(), v.end()));
//         sort(v.begin(), v.end());
//         reverse(v.begin(), v.end());
        
//         for(auto x:v){
//             if(x==1){
//                 isTrue = 1;
//             }
//         }
//         if(!isTrue){
//             int temp = v.size()+1;
//             v.clear();
//             for(int i = 0;i<temp;i++){
//                 v.push_back(1);
//             }
//         }else{
//             v.pop_back();
//             v.push_back(7);
//         }
//     }
// }

// void solve_3(){
//     int n;
//     cin>>n;
//     int MAX = 10000000;
//     int m = 2;
//     // 1 7 11 17 71 77 111 117 171 177 711 717 771 777
//     int cnt = 1;
//     if(n==1){
//         cout<<1;
//     }
//     if(n==2){
//         cout<<7;
//     }
//     int ml = 4;
//     while(m<n){
//         m = m + ml;
//         ml = ml+ml;
//         cnt++;
//     }
//     vector<int>v;
//     int n_1 = m%n;
//     if(n_1==0){
//         for(int i = 0;i<cnt;i++){
//             cout<<1;
//         }
//     }
//     for(int i = 0;i<cnt;i++){
//         v.push_back(1);
//     }
//     bool isOne = 1;
//     while(n_1!=0){
//         sort(v.begin(), v.end());
//         do{
//             n_1--;
//             if(n_1==0){
//                 for(int i = 0;i<v.size();i++){
//                     cout<<v[i];
//                 }
//                 return;
//             }
//         }while(next_permutation(v.begin(), v.end()));
//         cout<<n_1;
//         sort(v.begin(), v.end());
//         v[0] = 7;
//     }
// }

// void solve_2(){
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(7);
//     int n = 0;
//     do{
//         n++;
//     }while(next_permutation(v.begin(), v.end()));
//     for(auto x:v){
//         cout<<x<<" ";
//     }
//     cout<<n;
// }
// int main(){
//     go
//     // solve();
//     // solve_2();
//     solve_3();
// }


#include <iostream>
#include <string>

using namespace std;

int nthNumber(int n) {
    int sequence[n];
    sequence[0] = 1;
    int count = 1;

    while (count < n) {
        count++;
        int nextNumber = sequence[count - 2];
        string nextNumberStr = to_string(nextNumber);
        
        // Find the index of the last digit that is not 7
        int lastNonSevenIndex = -1;
        for (int i = 0; i < nextNumberStr.length(); i++) {
            if (nextNumberStr[i] != '7') {
                lastNonSevenIndex = i;
            }
        }
        
        if (lastNonSevenIndex == -1) {
            // All digits are 7, append 1 and start again
            sequence[count - 1] = stoi(string(nextNumberStr.length() + 1, '1'));
        } else {
            // Increment the last non-7 digit and reset the rest to 1
            nextNumberStr[lastNonSevenIndex] = nextNumberStr[lastNonSevenIndex] + 1;
            for (int i = lastNonSevenIndex + 1; i < nextNumberStr.length(); i++) {
                nextNumberStr[i] = '1';
            }
            sequence[count - 1] = stoi(nextNumberStr);
        }
    }

    return sequence[n - 1];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int result = nthNumber(n);
    cout << "The " << n << "-th number in the sequence is: " << result << endl;
    return 0;
}
