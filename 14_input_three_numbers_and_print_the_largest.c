#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ENTER FIRST NUMBER: ");
    scanf("%d",&a);
    printf("ENTER SECOND NUMBER: ");
    scanf("%d",&b);
    printf("ENTER THREE NUMBER: ");
    scanf("%d",&c);
    if(a>b&&a>c)
    {
        printf("THE LARGEST NUMBER IS %d",a);
    }
    else if(b>a&&b>c)
    {
        printf("THE LARGEST NUMBER IS %d",b);
    }
    else
    {
        printf("THE LARGEST NUMBER IS %d",c);
    }
    return 0;
}