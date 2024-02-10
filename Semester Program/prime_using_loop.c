#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,count=0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("\nPrime number");
    }
    else
    {
        printf("\nNot Prime Number");
    }
}