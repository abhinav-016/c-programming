#include<stdio.h>
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    return n*factorial(n-1);
}
int main()
{
    int n,f;
    printf("Enter the no.: ");
    scanf("%d",&n);

    f=factorial(n);

    printf("\nResult = %d",f);
    return 0;
}