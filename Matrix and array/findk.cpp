#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int k=8;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==k){
//                 cout<<"("<<arr[i]<<","<<arr[j]<<")"<<","<<"\t";
//             }
//         }
//     }
// }

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int i=0;
    int j=n-1;
    int b[2];
    
    //sort array first
    while(i<j){
        if(a[i]+a[j]==k){
            b[0]=a[i];
            b[1]=a[j];
        }else if(a[i]+a[j]>k){
            j--;
        }else if( a[i]+a[j]<k){
            i++;
        }
    }