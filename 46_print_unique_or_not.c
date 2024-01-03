// 59 = 5+9 = 14
// 59 = 5*9 = 45
// => 14 + 45 = 59
#include<stdio.h>
int main()
{
    int n,x,b,s=0,m=1;

    printf("Enter the number: ");
    scanf("%d",&n);

    x=n;

    while(x!=0)
    {
        b=x%10;
        s+=b;
        m*=b;
        x=x/10;
    }
    if(s+m==n)
    {
        printf("%d is a Unique Number",n);
    }
    else
    {
        printf("%d is not a Unique Number",n);
    }
}
