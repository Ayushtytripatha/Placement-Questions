#include<iostream>
using namespace std;
int main(){
    int m,n;
    int o,p,sum=0;
    cout<<"Enter value of m and n : ";
    cin>>m>>n;
    cout<<"Enter value of o and p : ";
    cin>>o>>p;
    int arr1[m][n];
    int arr2[o][p];
    cout<<"Input Ist matrix elements :";
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"Input 2nd matrix elements :";
    cout<<endl;
    for(int i=0;i<o;i++){
        for(int j=0;j<p;j++){
            cin>>arr2[i][j];
        }
    }
    if(m==o&&n==p){
       int arr3[m][n];
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
                arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    cout<<"After matrix Addition  :";
    cout<<endl;
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr3[i][j]<<"\t";
        }
        cout<<"\n";
    }
    }
    else{
        cout<<"Matrix is not able to Add";
    }
    
}