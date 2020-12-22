#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
} 
int findgcd(int arr[],int n){
    int g = arr[0];
    for(int i=1;i<n;i++){
        g = gcd(arr[i],g);
        if(g==1){
            return 1;

        }
    }
    return g;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findgcd(arr,n);
    return 0;
}