#include<stdio.h>
int main()
{
    int i,n,f=1;

    printf("Enter the no. : ");
    scanf("%d",&n);
    
    for(i=n;i>=1;i--)
    {
        f=f*i;
    }
    printf("Factorial of given number is: %d",f);
}