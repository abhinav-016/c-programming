// 9 = 9^2 = 81
// 81 = 8+1 = 9
#include<stdio.h>
int main()
{
    int n,c,sum=0,x;

    printf("Enter the number: ");
    scanf("%d",&n);

    x=n*n;
    while(x!=0)
    {
        c=x%10;
        sum+=c;
        x=x/10;
    }
    if(sum==n)
    {
        printf("%d is a Neon Number.",n);
    }
    else
    {
        printf("%d is not a Neon Number.",n);
    }
}