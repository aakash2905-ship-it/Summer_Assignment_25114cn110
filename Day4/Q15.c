//Write a program to Check Armstrong number. 
#include <stdio.h>
#include <math.h>   
int main() {
    int n,i,sum=0;
    printf("Enter the number to check: ");
    scanf("%d", &n);
    i=n;
    while(n>0)
    {sum=sum+pow(n%10,3);
    n=n/10;}
    // Check if the result is equal to the original number
    if (sum == i) {
        printf("%d is an Armstrong number.", i);
    } else {
        printf("%d is not an Armstrong number.", i);
    }

    return 0;
}