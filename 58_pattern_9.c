/*from Nth number
  5
  4 5 
  3 4 5
  2 3 4 5
  1 2 3 4 5 */

#include<stdio.h>
int main()
{
    int i,j,n;

    printf("Enter the value of n to print pattern: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }    
}