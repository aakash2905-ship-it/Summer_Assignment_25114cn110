//Write a program to Find nth Fibonacci term.
#include <stdio.h>
int main() {
    int n,i,t1=0, t2=1,t3;
    
    printf("Enter the term number: ");
    scanf("%d", &n);
    
    if (n == 0) {
        t3 = t1;
    } else if (n == 1) {
        t3 = t2;
    } else {
        for (i=2;i<=n;i++) {
            t3 = t1 + t2;
            t1 = t2;
            t2 = t3;
        }
    }
    
    printf("The %dth term in Fibonacci series is: %d", n, t3);
    
    return 0;
}