#include<stdio.h>
int factorial(int n, int f)
{
    if(n==0)
    return f;
    else
    return factorial((n-1),n*f);
}
int main()
{
    int n,a;

    printf("Enter the no. = ");
    scanf("%d",&n);

    a = factorial(n,1);

    printf("\nResult = %d",a);
    return 0;
}