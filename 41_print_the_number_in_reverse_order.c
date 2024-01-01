//653 = 356
#include<stdio.h>
void main()
{
    int n,b,rev=0;
    printf("ENTER NUMBER: ");
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        rev= rev*10+b;
        n=n/10;
    }
    printf("Reverse number: %d",rev);
}