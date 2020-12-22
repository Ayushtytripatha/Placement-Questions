#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=1+n-i;k++){
            printf("%d",k);
        }
        for(int j=n-i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
        
     
}