#include<bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    if(n<=1){
        return 1;
    }return n*factorial(n-1);
}

string findPermut(string &s, long long n) {
    sort(s.begin(), s.end());
    long long fact = factorial(s.size());
    if (n >= fact) {
        return "??";
    }

    string res = "";
    vector<bool> used(s.size(), false);
    for(int i = 0;i<s.size();i++){
        fact = fact/(s.size()-i); 
        long long index = n/fact; 
        n = n%fact; 
        int j = 0;
        while(index>0 || used[j]){
            if(!used[j]){
                index--;
            }
            j++;
        }
        used[j] = 1;
        res+=s[j];
    }
    return res;
}

int main() {
    int tt;cin>>tt;
    while(tt--){
        string s;cin>>s;
        long long n;cin>>n;
        cout<<findPermut(s, n)<<endl;
    }
}
