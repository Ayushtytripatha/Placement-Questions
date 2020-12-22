#include<stdio.h>
int main(){
    int n,k = 20;;
    scanf("%d",&n);
    if(n%2!=0){
        for(int i=1;i<=n/2;i++){
        k = k+10;
        printf("cos%d,",k);
        printf("sin%d,",k);
        
    }
    printf("cos%d,",k+10);
    }
    else{
        for(int i=1;i<=n/2;i++){
        k = k+10;
        printf("cos%d,",k);
        printf("sin%d,",k);
        
    }
    }
    
}