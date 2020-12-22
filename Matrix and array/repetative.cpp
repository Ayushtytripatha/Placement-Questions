#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    int repatnum;
    for(int i=0;i<n;i++){
        num = arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                repatnum = arr[i];
            }
        }
        
    }
    cout<<repatnum;
}