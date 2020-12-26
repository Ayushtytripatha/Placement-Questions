#include<iostream>
#include<vector>
#include<queue>
using namespace std;
bool isValid(int i,int j,int m,int n){
    return i>=0 && i<m && j>=0 && j<n;
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
    vector<pair<int,int> > directions{{1,0},{0,1},{-1,0},{0,-1}};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j]==1 && visited[i][j]==0){
                cout++;
                queue<pair<int,int> > q;
                q.push({i,j});
                visited[i][j] = 1;
                while(!q.empty()){
                    pair<int,int> p = q.front();
                    q.pop();
                    for(pair<int,int> dir: directions){
                        int new_i = dir.first + p.first;
                        int new_j = dir.second + p.second;
                        if(isValid(new_i,new_j,m,n) && visited[new_i][new_j]==0 && v[new_i][new_j]==1){
                            q.push({new_i,new_j});
                            visited[new_i][new_j]=1;
                        }
                    }

                }
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