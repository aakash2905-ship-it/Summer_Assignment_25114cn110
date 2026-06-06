//Write a program to Convert decimal to binary.
#include <stdio.h>
int main(){
    int n,rem,a[10],i=0;
    printf("Enter a number to convert decimal to binary: ");
    scanf("%d",&n);
    while(n>0){
        rem=n%2;
        a[i]=rem;
        i++;
        n=n/2;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    return 0;
}