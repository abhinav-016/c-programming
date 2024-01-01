//Pallindrome Numbers : 121,1331,75257
#include<stdio.h>
int main()
{
    int x,n,sum=0,b;

    printf("Enter Number: ");
    scanf("%d",&n);

    x=n;
    while (n!=0)
    {
        b=n%10;
        sum = sum*10 + b;
        n/=10;
    }
    if(x==sum)
    {
        printf("Given number is Pallindrome.");
    }
    else
    {
        printf("Given number is not Pallindrome.");
    }
}