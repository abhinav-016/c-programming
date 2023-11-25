//sum of: 1+5+2+10+3+15+.........+n+5*n
#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1,j=5;i<=n,j<=(5*n);i++,j+=5)
    {
        sum=sum+i+j;
    }
    printf("Sum of the given series: %d",sum);
}