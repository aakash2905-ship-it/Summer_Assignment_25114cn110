//Write a program to Convert binary to decimal.
#include <stdio.h>
int main(){
    int n,rem,dec=0,i=0;
    printf("Enter a binary number to convert binary to decimal: ");
    scanf("%d",&n);
    while(n>0){
        rem=n%10;
        dec=dec+rem*(1<<i);
        i++;
        n=n/10;
    }
    printf("Decimal equivalent: %d",dec);
    return 0;
}