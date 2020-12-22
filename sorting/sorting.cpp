#include<iostream>
using namespace std;
int arraySortedOrNot(int arr[], int n)
{
    if (n == 1 || n == 0)
        return 1;
    if (arr[n - 1] < arr[n - 2])
        return 0;
    return arraySortedOrNot(arr, n - 1);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    char str[n-1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        cin>>str[i];
    }
    int temp;
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1;i++){
        if(str[i]=='1'){
            if(arr[i]>arr[i+1]){
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
}
int result = arraySortedOrNot(arr,n);
if(result==1){
    cout<<"YES";
}
else{
    cout<<"NO";
}
}
