#include<iostream>
using namespace std;
int ncr(int n,int r){
    if(r==0 || r==n)
        return 1;
    else if(r==1 || r==n-1)
        return n;
    return ncr(n-1,r-1) + ncr(n-1,r);
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<ncr(n,r);
}