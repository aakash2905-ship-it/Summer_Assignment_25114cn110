//Write a program to Print prime numbers in a range.
#include<stdio.h>
int main() 
{
    int lv,uv,i,flag=0;
    printf("Enter lower value: ");
    scanf("%d", &lv);
    printf("Enter upper value: ");
    scanf("%d", &uv);
    printf("Prime numbers between %d and %d are: ", lv, uv);
    while (lv < uv) 
    {
        flag = 0;
        for (i = 2; i <= lv / 2; i++) 
        {
            if (lv % i == 0) 
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0 && lv > 1)
            printf("%d ", lv);
          lv++;
    }
    return 0;
}