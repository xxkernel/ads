// #include <bits/stdc++.h>
// using ll = long long;
// #define go ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
// using namespace std;

// int gcd(int a, int b){
//     if(b==0){
//         return a;
//     }return gcd(b, a%b);
// }

// ll lcm(int a, int b){
//     return a/gcd(a, b)*b;
// }

// void solve(){
//     int n;
//     cin>>n;
//     vector<int>v;
//     for(int i = 0;i<n;i++){
//         int num;cin>>num;
//         v.push_back(num);
//     }
//     int dp[n][n];
//     memset(dp, 0, sizeof(dp));
//     for(int i = 0;i<n;i++){
//         for(int j = i+1;j<n;j++){
//             dp[i][j] = gcd(v[j], v[i]);
//         }
//     }
//     for(int i = 0;i<n;i++){
//         for(int j = 0;j<n;j++){
//             cout<<dp[i][j]<<" ";
//         }cout<<endl;
//     }
//     int m;
//     cin>>m;
//     while(m--){
//         int q, l, r;
//         cin>>q>>l>>r;

//     }
// }

// int main(){
//     go
//     solve();

// ТУПОЙ СЕГМЕнт ТРИИИИИИИИИИИИИИИИИ
// ЛУЧШЕ БЫ ОБЫЧНЫЙ ТРИИИИ
// ЛАДНО В ЦЕЛОМ ЗАЧЕМ ТУПОЙ СЕГМЕНТ ТРИИИИИИИ
// - милллиаррддддд часов
// еще дп задача шгра алмадм
//ФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФФАААААААААААААААААААААААААААААААААААААААААААААААААААААААААААААААААААА
// }

#include<bits/stdc++.h>
using namespace std;

struct node{
  int min, max;
} 
t[4*1000001] = {0};

int v[1000001];

 
void BuildTree(int* a, int v, int l, int r){
  if (l == r){
    t[v].min = t[v].max = a[l];
  }
  else{
    int mid = (l + r) / 2;
    BuildTree(a, v * 2, l, mid);
    BuildTree(a, v * 2 + 1, mid + 1, r);
    t[v].min = min(t[v*2].min, t[v*2+1].min);
    t[v].max = max(t[v*2].max, t[v*2+1].max);
  }
}


int GetMin(int v, int l, int r, int left, int right){
  if (left > right){
    return INT_MAX;
  }
  if ((left == l) && (right == r)){
    return t[v].min;
  } 
  int mid = (l + r) / 2;
  return min(GetMin(v*2, l, mid, left, min(right, mid)),
           GetMin(v*2 + 1, mid + 1, r, max(left, mid + 1), right));
}

int GetMax(int v, int l, int r, int left, int right){
  if (left > right){
    return INT_MIN;
  }
  if ((left == l) && (right == r)){
    return t[v].max;
  }

  int mid = (l + r) / 2;

  return max(GetMax(v*2, l, mid, left, min(right, mid)),
            GetMax(v*2+1, mid + 1, r, max(left, mid + 1), right));
}

 
void update(int v, int l, int r, int pos, int val){
  if (l == r)
    t[v].min = t[v].max = val;
  else{
    int mid = (l + r) / 2;
    if (pos <= mid){
        update(v*2, l, mid, pos, val);
    }
    else{
        update(v*2+1, mid + 1, r, pos, val);
    }
    t[v].min = min(t[v*2].min, t[v*2+1].min);
    t[v].max = max(t[v*2].max, t[v*2+1].max);
  }
}


int main(){
    // memset(t, 0, sizeof(t));
    int n, m;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cin>>v[i];
    }
    BuildTree(v,1,1,n);
    cin>>m;

    for(int i = 0; i < m; i++){
        int q, l, r;
        cin>>q>>l>>r;
        if (q == 1)
        {
            int min = GetMin(1,1,n,l,r);
            int max = GetMax(1,1,n,l,r);
            if (min == max){
                cout<<"draw"<<endl;;
            }else{
                cout<<"wins"<<endl;
            }
        }
        else if(q==2){
            update(1,1,n,l,r);
        }
    }
}