#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    for(i=1;i<=b;i++)
    {
        sum+=a;
    }
    printf("Multiplication of two numbers: %d",sum);
}