/* 1
   2 3
   4 5 6
   7 8 9 10 upto N numbers   */

#include<stdio.h>
int main()
{
    int i,j,n=1,m;

    printf("Enter the number for rows for the pattern: ");
    scanf("%d",&m);

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d " ,n);
            n++;
        }
        printf("\n");
    }    
}