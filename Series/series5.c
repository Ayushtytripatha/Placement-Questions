#include<stdio.h>
int main(){
    int n,res=2;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf("log 1/%d,",i*5);
        }
        else{
            printf("log 1/%d,",res);
            res++;
        }
        
    }
}