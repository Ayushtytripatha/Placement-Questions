#include<iostream>
#include<vector>
#include<list>
#include <map>
#include <iterator>
#include<queue> 
using namespace std;

void dfs(int src,map<int, list<int> > &AdjL,map<int,bool> &visited){
    cout<<src<< " ";
    visited[src] = true;
    list <int> :: iterator it;
    for(it = AdjL[src].begin(); it != AdjL[src].end(); ++it){
        if(!visited[*it]){
            dfs(*it,AdjL,visited);
        }
    }

}

int main(){
     map<int, list<int> > AdjL;
     
     int v,e;
     int src,des;
     cin>>v>>e;
     for(int i=0;i<e;i++){
         cin>>src>>des;
         AdjL[src].push_back(des);
         AdjL[des].push_back(src);
     } 
            
    map<int,bool> visited;
    for(auto p:AdjL){
        visited[p.first] = false;
    }
    dfs(0,AdjL,visited);

    
}
