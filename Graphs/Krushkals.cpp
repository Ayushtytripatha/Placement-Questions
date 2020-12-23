#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int finds(int i,int *parent){
    if(i==parent[i])
        return i;
    return finds(parent[i],parent);
}
void joining(int i,int j,int *parent){
    int par_i = finds(i,parent);
    int par_j = finds(j,parent);
    parent[par_i] = par_j;
}

void print(vector<pair<int,pair<int,int> > > g1){
    for(int i=0;i<g1.size();i++){
        cout<<"("<<g1[i].first<<","<<"("<<g1[i].second.first<<","<<g1[i].second.second<<")"<<")"<<endl;
    }
}

vector<pair<int,pair<int,int> > > Krushkals(vector<pair<int,pair<int,int> > > g1){
    vector<pair<int,pair<int,int> > > res;
    sort(g1.begin(),g1.end());
    int parent[6];
    for(int i=0;i<6;i++){
        parent[i] = i;
    }
    for(int i=0;i<g1.size();i++){
        int src,des,weight;
        src = g1[i].second.first;
        des = g1[i].second.second;
        weight = g1[i].first;
        if(finds(src,parent) != finds(des,parent)) {
            joining(src,des,parent);
            res.push_back(g1[i]);
        }
    }
    return res;
}
int main(){
   vector<pair<int,pair<int,int> > > g1;
    int n;
    cin>>n;
    int src,des,weight;
    for(int i=0;i<n;i++){
        cin>>src>>des>>weight;
        g1.push_back(make_pair(weight,make_pair(src,des)));
    }
    cout<<"Graph "<<endl;
    //print(g1);
    vector<pair<int,pair<int,int> > > res = Krushkals(g1);
    print(res);
}
