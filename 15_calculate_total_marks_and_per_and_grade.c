#include<stdio.h>
int main()
{
    float per;
    int P,C,M,T;
    printf("ENTER PHYSICS NUMBER: ");
    scanf("%d",&P);
    printf("ENTER CHEMISTRY NUMBER: ");
    scanf("%d",&C);
    printf("ENTER MATHS NUMBER: ");
    scanf("%d",&M);
    T=P+C+M;
    per=((P+C+M)/300.0)*100.0;
    printf("TOTAL MARKS: %d",T);
    printf("\nPERCENTAGE: %0.2f",per);
    if(per>=80)
    {
        printf("\nGRADE A");
    }
    else if(per>=60&&per<=80)
    {
        printf("\nGRADE B");
    }
    else if(per>=40&&per<=60)
    {
        printf("\nGRADE C");
    }
    else
    {
        printf("\nGRADE D");
    }
}