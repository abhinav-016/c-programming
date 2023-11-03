#include<stdio.h>
void main()
{
    float per;
    int p,c,m,T;
    printf("ENTER MARKS OF P: ");
    scanf("%d", &p);
    printf("ENTER MARKS OF C: ");
    scanf("%d", &c);
    printf("ENTER MARKS OF M: ");
    scanf("%d", &m);
    T = p+c+m;
    per = (T/300.00)*100.00;
    printf("TOTAL MARKS OF 3 SUBJECTS IS: %d", T);
    printf("\nPERCENTAGE OF 3 SUBJECTS : %0.2f", per);
    if(per>50)
    {
        printf("\nPASS");
    }
    else
    {
        printf("\nFAIL");
    }
}