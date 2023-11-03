#include<stdio.h>
void main()
{
    float A;
    int P,C,M,T;
    printf("ENTER MARKS OF PHYSICS: ");
    scanf("%d", &P);
    printf("ENTER MARKS OF CHEMISTRY: ");
    scanf("%d", &C);
    printf("ENTER MARKS OF MATHS: ");
    scanf("%d", &M);
    T=P+C+M;
    A=T/3;
    printf("TOTAL MARKS OF THREE SUBJECTS: %d", T);
    printf("\nAVERAGE MARKS OF THREE SUBJECTS: %0.2f", A);
} 