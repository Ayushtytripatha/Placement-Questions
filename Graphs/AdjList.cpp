#include<iostream>
#include<vector>
using namespace std;
int main(){
    int v,e,src,des;
    cin>>v>>e;
   vector<int>  g1[v];

    for (int i = 0; i < v; i++) { 
        g1[i].push_back(i);
    } 
    for(int i=0;i<e;i++){
        cin>>src>>des;
        g1[src].push_back(des);
        g1[des].push_back(src);
    }
    cout<<"Adjasent List "<<endl<<endl;
    for (int i = 0; i < v; i++) { 
        for (int j = 0; j < g1[i].size(); j++) { 
            cout<<g1[i][j]<<" "; 
        } 
        cout<<endl;
    }
}