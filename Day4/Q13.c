//Write a program to Generate Fibonacci series. 
#include <stdio.h>
int main() {
    int n,i,t1=0, t2=1,t3;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series: ");
    for (i=0;i<=n;i++) {
        if (i <= 1) {
            t3 = i;
        } else {
            t3 = t1 + t2;
            t1 = t2;
            t2 = t3;
        }
        printf("%d ", t3);
    }
    
    return 0;
}