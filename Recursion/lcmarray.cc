#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
} 
int lcm(int arr[],int n){
    int l = arr[0];
    for(int i=1;i<n;i++){
        l = l*(arr[i]/gcd(l,arr[i]));
    }
    return l;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<lcm(arr,n);
}