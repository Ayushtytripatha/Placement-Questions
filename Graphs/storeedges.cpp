#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<pair<int,pair<int,int> > > g1;
    int v,e;
    cin>>v>>e;
    int src,des,weight;
    for(int i=0;i<e;i++){
        cin>>src>>des>>weight;
        g1.push_back(make_pair(weight,make_pair(src,des)));
    }
    for(int i=0;i<g1.size();i++){
        cout<<"("<<g1[i].first<<","<<"("<<g1[i].second.first<<","<<g1[i].second.second<<")"<<")"<<endl;
    }
}