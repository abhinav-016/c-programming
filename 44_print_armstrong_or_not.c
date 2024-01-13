// 153 = 1^3+5^3+3^3 = 153
// 1634 = 1^4+6^4+3^4+4^4 = 1634
#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,c=0,x,loop=1,y,sum=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    x=n;
    while(x!=0)
    {
        x=x/10;
        c++;
    }
    x=n;
    while(x!=0)
    {
        a=x%10;
        y=a;
        while(loop<c)
        {
            a=a*y;
            loop++;
        }
        loop=1;
        sum+=a;
        x=x/10;
    }
    if(sum==n)
    {
        printf("%d is an Armstrong Number.",n);
    }
    else
    {
        printf("%d is not an Armstrong Number.",n);
    }
    return 0;
}