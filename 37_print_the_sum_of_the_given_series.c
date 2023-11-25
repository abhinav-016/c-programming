//sum of: (1/2)+(2/3)+(3/4)+........+(n/(n+1))
#include<stdio.h>
int main()
{
    int n;
    float i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum+=i/(i+1);
    }
    printf("Sum of the given series: %0.2f",sum);
}