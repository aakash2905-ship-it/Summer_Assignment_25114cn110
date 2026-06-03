#include<stdio.h>
int main()
{
    int num,rev=0,rem,n;
    printf("Enter the number: ");
    scanf("%d",&num);
    n=num;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(num==rev)
    {
        printf("The Entered number is a palindrome.");
    }
    else
    {
        printf("The Entered number is not a palindrome.");
    }
    return 0;   
}