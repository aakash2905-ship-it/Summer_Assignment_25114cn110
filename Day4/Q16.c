//Write a program to Print Armstrong numbers in a range.
#include <stdio.h>
#include <math.h>   
int main() {
    int lower, upper, i, n, sum;
    
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    
    printf("Armstrong numbers between %d and %d are: ", lower, upper);
    for (i = lower; i <= upper; i++)
     {
        n = i;
        sum = 0;
        
        while (n > 0) {
            sum=sum + pow(n % 10, 3);
            n /= 10;
        }
        
        if (sum == i) {
            printf("%d ", i);
        }
    }
    
    return 0;
}