#include<iostream>
using namespace std;
int main(){
    int m,n;
    int o,p;
    cout<<"Enter value of m and n : ";
    cin>>m>>n;
    cout<<endl;
    cout<<"Enter value of o and p : ";
    cin>>o>>p;
    cout<<endl;
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
    if(n==o){
        int arr3[m][p];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                arr3[i][j]=0;
                for(int k=0;k<p;k++){
                    arr3[i][j] += arr1[i][k]*arr2[k][j];
                }
                
            }
        }
        cout<<"After matrix Multiplication  :";
        cout<<endl;
        for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr3[i][j]<<"\t";
        }
        cout<<"\n";
    }
    }
    else{
        cout<<"Matrix is not able to multiply";
    }
    
    
     
}