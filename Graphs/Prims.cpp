#include<iostream>
#include<vector>
#include<climits>
using namespace std;
bool allVisited(int *visited,int v){
    for(int i=0;i<v;i++){
        if(visited[i]==0) 
            return false;
    }
    return true;
}
int minimumNotVisited(int *visited,int *weight,int v){
    int index = -1;
    for(int i=0;i<v;i++){
        if(visited[i]==0){
            if(index==-1)
                index = i;
            else{
                if(weight[index] >weight[i]){
                    index = i;
                }
            }
        }
    }
    return index;
}
void primutils(vector<vector<pair<int,int> > >  &g,int *parent,int *visited,int *weight,int v,int e,int src){
    weight[src] = 0;
    while(!allVisited(visited,v)){
        int index = minimumNotVisited(visited,weight,v);
        for(int i=0;i<g[index].size();i++){
            int des = g[index][i].first;
            int w = g[index][i].second;
            if(weight[des]>w && visited[des]==0){
                weight[des] = w;
                parent[des] = index;
            }
        }
        visited[index] = 1;
    }
}
void prims(vector<vector<pair<int,int> > >  &g,int e){
    int v = g.size();
    int parent[v],visited[v],weight[v];
    for(int i=0;i<v;i++){
        parent[i] = -1;
        visited[i] = 0;
        weight[i] = INT_MAX;
    }
    int src = 0;
    primutils(g,parent,visited,weight,v,e,src);
    cout<<"Parent :\t";
    for(int i=0;i<v;i++){
        cout<<parent[i]<<"\t";
    }
    cout<<endl;
    cout<<"Weights :\t";
    for(int i=0;i<v;i++){
        cout<<weight[i]<<"\t";
    }

}
int main(){
    int v,e;
    cin>>v>>e;
    vector<vector<pair<int,int> > >  g(v);
    int s,d,w;
    for(int i=0;i<e;i++){
        cin>>s>>d>>w;
        g[s].push_back(make_pair(d,w));
        g[d].push_back(make_pair(s,w));
    }
    prims(g,e);

}