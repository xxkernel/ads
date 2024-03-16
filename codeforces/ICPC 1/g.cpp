#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    while(n--){
        int r, c;
        cin>>r>>c;
        char a[r][c];
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                cin>>a[i][j];
            }
        }
        for(int i = 0;i<c;i++){
            int row_empty = r;
            for(int j = r-1;j>=0;j--){
                if(a[j][i]=='*'){
                    if(row_empty==j){
                        continue;
                    }
                    else{
                        int temp = j+1;
                        while(temp!=row_empty){
                            if(a[temp][i]=='.'){
                                a[temp][i] = '*';
                                a[temp-1][i] = '.';
                            }
                            else if(a[temp][i]=='o'){
                                break;
                            }
                            temp++;
                        }
                        row_empty = temp-1;
                    }
                }
            }
        }
        for(int i = 0;i<r;i++){
            for(int j = 0;j<c;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}