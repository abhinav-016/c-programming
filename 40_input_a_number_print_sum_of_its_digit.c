//256 = 6+5+2 = 13
#include<stdio.h>
void main()
{
    int n,b,sum=0;
    printf("ENTER NUMBER: ");
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        sum+=b;
        n=n/10;
    }
    printf("Sum of its digit: %d",sum);
}