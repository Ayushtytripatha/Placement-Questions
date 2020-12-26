#include<iostream>
#include<vector>
#include<list>
#include <map>
#include <iterator>
#include<queue> 
using namespace std;

int main(){
     map<int, list<int> > AdjL;
     list <int> :: iterator it;
     int v,e;
     int src,des;
     cin>>v>>e;
     for(int i=0;i<e;i++){
         cin>>src>>des;
         AdjL[src].push_back(des);
         AdjL[des].push_back(src);
     } 
    cout<<"Enter the Root Node ";
    cin>>src;         
    queue<int> gq;
    map<int,bool> visited;
    gq.push(src);
    visited[src] = true;
    while(!gq.empty()){
        int value = gq.front();
        gq.pop();
        cout<<value<<" ";
        for(it = AdjL[value].begin(); it != AdjL[value].end(); ++it){
            if(!visited[*it]){
                gq.push(*it);
                // mark that neibhour as visited
                visited[*it] = true;
            }
        }
    }

}
    

// 7
// 11
// 0 1
// 0 3
// 1 2
// 1 3
// 1 5 
// 1 6
// 2 3
// 2 4
// 2 5
// 3 4
// 4 6

    //  for (auto itr = AdjL.begin(); itr != AdjL.end(); itr++){
    //         cout << itr -> first << "  " ;
    //      for(it = AdjL[itr -> first].begin(); it != AdjL[itr -> first].end(); ++it) 
    //         cout << '\t' << *it; 
    // cout << '\n';
         
    //  } 
