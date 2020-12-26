#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void bellman(vector<vector<pair<int,int> > >  &g,int e){
    int v = g.size();
    int parent[v],weight[v];
    for(int i=0;i<v;i++){
        parent[i] = -1;
        weight[i] = INT_MAX;
    }
    int src = 0;
    weight[src] = 0;
    for(int i=0;i<v;i++){
        for(int j=0;j<g[i].size();j++){
            int des = g[i][j].first;
            int w = g[i][j].second;
            if(weight[des]>w && weight[i] + w < weight[des] && weight[i] !=INT_MAX){
                weight[des] = w + weight[i];
                parent[des] = i;
            }
        }
    }
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
    bellman(g,e);

}