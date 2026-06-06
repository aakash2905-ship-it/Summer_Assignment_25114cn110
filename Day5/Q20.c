//Write a program to Find largest prime factor.
#include <stdio.h>
int main() {
    long long n, largest = -1;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while (n % 2 == 0) {
        largest = 2;
        n = n / 2;
    }

    for (int i = 3; i <= n / 2; i += 2) {
        while (n % i == 0) {
            largest = i;
            n = n / i;
        }
    }

    if (n > 2) {
        largest = n;
    }

    if (largest != -1) {
        printf("Largest prime factor: %lld\n", largest);
    } else {
        printf("No prime factors found.\n");
    }

    return 0;
}