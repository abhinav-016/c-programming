// FIBONACCI SERIES: 0 1 1 2 3 5 8 13 21 . . . . . . . . . N
#include<stdio.h>
int main()
{
    int i,n,a,b,c;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    a=0;
    b=1;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d\t",a);
        a=b;
        b=c;
    }
}