#include<stdio.h>
void main()
{
    int a,b;
    printf("ENTER TWO NUMBERS: ");
    scanf("%d%d", &a,&b);
    if(a>b)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }
}