#include<iostream>
#include<vector>
using namespace std;
bool isValid(int i,int j,int m,int n){
    return i>=0 && i<m && j>=0 && j<n;
}

void dfs(vector<vector<int> > &v,vector<vector<int> > &visited,int i,int j){
    visited[i][j] = 1;
    int r[] = {-1,0,0,1};
    int c[] = {0,-1,1,0};
    int m = v.size();
    int n = v[0].size();
    for(int k=0;k<4;k++){
        int new_i = i + r[k],new_j = j + c[k];
        if(isValid(new_i,new_j,m,n) && v[new_i][new_j]==1 && visited[new_i][new_j]==0){
            dfs(v,visited,new_i,new_j);
        }
    }
}


int coutIslands(vector<vector<int> > &v){
    int m = v.size();
    int n = v[0].size();
    vector<vector<int> > visited(m);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            visited[i].push_back(0);
        }
    }
    int cout = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==1 && visited[i][j]==0){
                cout++;
                dfs(v,visited,i,j);
            }
        }
    }
    return cout;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int> > v(m);
    int key;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>key;
            v[i].push_back(key);
        }
    }
    cout<<coutIslands(v)<<endl;
}