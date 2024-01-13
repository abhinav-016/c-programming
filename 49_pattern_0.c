/*  1 2 3 . . . . n
    1 2 3 . . . . n
    1 2 3 . . . . n
    .
    .
    .
    .
    n times              */
#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the value of n to print pattern: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}