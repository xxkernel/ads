#include<iostream>
using namespace std;

int cnt = 0;
void rb(string s, string text){
    int n = s.size();
    int m = text.size();
    long long s_1 = 0;
    long long text_1 = 0;
    long long q = 1e15 + 7;
    long long h = 1;
    long long p = 31;
    for(int i = 0;i<m-1;i++){
        h = (h*p)%q;  
    }
    for(int i = 0;i<m;i++){
        s_1 = (s_1*p+s[i])%q;           
        text_1 = (text_1*p+text[i])%q;  
    }
    for(int i = 0;i<=n-m;i++){
        if(text_1==s_1){
            bool isTrue = true;
            for(int j = 0;j<m;j++){
                if(s[i+j]!=text[j]){
                    isTrue = false;
                    break;
                }
            }
            if(isTrue){
                cnt++;
            }
        }
        if(i<n-m){
            s_1 = (p*(s_1-s[i]*h)+s[i+m])%q; 
            if(s_1<0){
                s_1+=q;
            }
        }
    }
}

int main(){
    string s;cin>>s;
    int n;cin>>n;
    for(int i = 0;i<n;i++){
        int l, r;
        cin>>l>>r;
        string temp = "";
        for(int j = l-1;j<r;j++){
            temp+=s[j];
        }
        rb(s, temp);
        cout<<cnt<<endl;
        cnt = 0;
    }
}