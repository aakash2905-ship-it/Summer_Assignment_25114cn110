//Write a program to Check strong number.
#include <stdio.h>
int main(){

    int n, sum = 0, temp, rem, factorial;

    printf("Enter a number to check if it's a strong number: ");
    scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        rem = temp % 10;
        factorial = 1;

        for (int i = 1; i <= rem; i++) {
            factorial *= i;
        }

        sum += factorial;
        temp /= 10;
    }

    if (sum == n) {
        printf("%d is a strong number.\n", n);
    } else {
        printf("%d is not a strong number.\n", n);
    }

    return 0;
}