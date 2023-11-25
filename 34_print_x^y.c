#include<stdio.h>
int main()
{
    int x,y,i,p=1;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);

    for(i=1;i<=y;i++)
    {
        p=p*x;
    }
    printf("The value of x^y: %d",p);
}