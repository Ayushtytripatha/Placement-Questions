#include<iostream>
#include<vector>
using namespace std;
int main(){
    int v,e,src,des;
    cin>>v>>e;
   vector<vector<int> > g1;
    for(int i=0;i<v;i++){
        vector<int> temp;
        for(int j=0;j<v;j++){
            temp.push_back(0);
        }
        g1.push_back(temp);
    }
    for(int i=0;i<e;i++){
        cin>>src>>des;
        g1[src][des] = 1;
        g1[des][src] = 1;
    }
    for(int i=0;i<g1.size();i++){
        for(int j=0;j<g1[i].size();j++){
            cout<<g1[i][j]<<" ";
        }
        cout<<"\n";
        
    }

}