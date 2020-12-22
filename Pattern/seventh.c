#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int j=i-1;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=1;i<n-1;i++){
        for(int j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=n-i-1;k++){
            printf("%d",k);
        }
        for(int j=n-i-2;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
        
     
}