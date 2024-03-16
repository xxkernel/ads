#include<bits/stdc++.h>
using namespace std;

// bool checkingUni(set<string>st, string s){
//     return st.find(s)==st.end();
// }

int main(){
    int n;
    while(cin>>n){
        int m;cin>>m;
        vector<int>v;
        for(int i = 0;i<m;i++){
            int num;cin>>num;
            v.push_back(num);
        }
        set<string>st;
        vector<string>ans;
        bool isTrue = 1;
        cout<<"Sums of "<<n<<":"<<endl;
        for(int i = 1;i<=m;i++){
            vector<bool>boo(m, 0);
            for(int j = m-1;j>m-i-1;j--){
                boo[j] = 1;
            }
            do{
                int sum = 0;
                vector<int>temp;
                for(int i = 0;i<m;i++){
                    if(boo[i]){
                        sum+=v[i];
                        temp.push_back(v[i]);
                    }
                }
                if(sum==n){
                    string s = "";
                    isTrue = false;
                    if(temp.size()==1){
                        s+=to_string(temp[0]);
                        if(st.find(s)==st.end()){
                            ans.push_back(s);
                            st.insert(s);
                        }
                    }else{
                        sort(temp.rbegin(), temp.rend());
                        for(int j = 0;j<temp.size()-1;j++){
                            s+=to_string(temp[j])+"+";
                        }
                        s+=to_string(temp[temp.size()-1]);
                        if(st.find(s)==st.end()){
                            ans.push_back(s);
                            st.insert(s);
                        }
                    }
                }
            }while(next_permutation(boo.begin(), boo.end()));
        }
        if(isTrue){
            cout<<"NONE"<<endl;
        }   else{
            sort(ans.rbegin(), ans.rend());
            for(int i = 0;i<ans.size();i++){
                cout<<ans[i]<<endl;
            }
        }
    }
}