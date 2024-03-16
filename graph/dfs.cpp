#include<bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>graph, vector<int>&visited, int v){
    visited[v] = 1;
    for(auto x:graph[v]){
        if(!visited[x]){
            dfs(graph, visited, x);
        }
    }
}

int main(){

}