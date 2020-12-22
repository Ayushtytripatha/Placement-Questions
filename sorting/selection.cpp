#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min,pos,temp;
    for(int i=0;i<n-1;i++){
        min = arr[i];
        pos = i;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                pos = j;
            }
        }
        if(i!=pos){
            temp = arr[i];
         arr[i] = min;
        arr[pos] = temp;
        }
         
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}