#include<stdio.h>
#include<conio.h>
void main()
{
    int ma, en, ph, ch, cs;
    float sum, per;
    printf("Enter the marks of Maths= ");
    scanf("%d", &ma);
    printf("Enter the marks of English= ");
    scanf("%d", &en);
    printf("Enter the marks of Physics= ");
    scanf("%d", &ph);
    printf("Enter the marks of Chemistry= ");
    scanf("%d", &ch);
    printf("Enter the marks of Computer_Science= ");
    scanf("%d", &cs);
    sum = ma+en+ph+ch+cs;
    per=(sum)/5;
    printf("The Percentage marks obtained= %f", per);
    getch();
}
