#include<stdio.h>
int main(){
    int n,k=1,s;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            s=k;
            k=k+i-1;
            for(int j=1;j<=i;j++){
            printf("%d",k);
            if(i!=j){
                printf("@");
            }
            k--;
            
        }
        k=s+i;
        }
        else{
            for(int j=1;j<=i;j++){
            printf("%d",k);
            if(i!=j){
                printf("@");
            }
            k++;
            
        }
        }
        
        printf("\n");
    }
}