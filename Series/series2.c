#include<stdio.h>
int main(){
    int n,res=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        res = i*3;
        printf("1/%d,\t",res);
    }
}