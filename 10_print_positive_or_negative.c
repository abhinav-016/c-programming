#include<stdio.h>
void main()
{
    int a;
    printf("ENTER A NUMBER: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d IS POSITIVE NUMBER", a);
    } 
    else
    {
        printf("%d IS NEGATIVE NUMBER", a);
    }
}