//Write a program to Find x^n without pow().
#include <stdio.h>
int main(){
    int x,n,result=1;
    printf("Enter a number and its power to find x^n: ");
    scanf("%d%d",&x,&n);
    for(int i=0;i<n;i++){
        result=result*x;
    }
    printf("%d^%d = %d",x,n,result);
    return 0;
}