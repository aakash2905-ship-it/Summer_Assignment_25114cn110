#include<stdio.h>
int main()
{
    int num;
    int count=0;
    printf("Enter the integer: ");
    scanf("%d",&num);
    if(num==0 && num<=9)
    {
        count=1;
    }
    else{
    while (num!=0)
    {num=num/10;
     count++;
    }
   printf("The number of digits in the given integer is %d",count);
   }
    return 0;
}