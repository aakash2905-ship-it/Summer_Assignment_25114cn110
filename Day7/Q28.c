//Write a program to Recursive reverse number.
#include <stdio.h>
int reverseNumber(int n) {
    static int rev = 0;
    if (n == 0) {
        return rev;
    }
    rev = rev * 10 + n % 10;
    return reverseNumber(n / 10);
}