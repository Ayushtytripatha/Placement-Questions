#include<stdio.h>
int main(){
    int n,res=1;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        res = 2*i;
        printf("%d/%d,\t",i,res);
    }
}