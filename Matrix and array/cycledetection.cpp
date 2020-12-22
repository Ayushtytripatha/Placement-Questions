#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            arr[abs(arr[i])] = arr[abs(arr[i])]*-1;
        }
        else{
            cout<<abs(arr[i]);
            break;
        }
           
    }
}