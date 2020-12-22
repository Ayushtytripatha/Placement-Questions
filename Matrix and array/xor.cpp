#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a[10] = {0};
    for(int i=0;i<n;i++){
        a[arr[i]]++;
    }
    int index;
    for(int i=0;i<10;i++){
        if(a[i]%2!=0 && a[i]!=0){
            index = i;
        }
    }
    cout<<arr[index];

}