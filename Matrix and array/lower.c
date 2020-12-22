#include<stdio.h>
int main(){
    int n,m,sum=0;
    scanf("%d",&m);
    scanf("%d",&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i>=j){
                sum+=arr[i][j];
            }
        }
    }
    printf("%d",sum);
}