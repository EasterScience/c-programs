#include<stdio.h>
#include<conio.h>
void main()
{
    int ma, en, ph, ch, cs, sum, per;
    printf("Enter the marks of five subjects: ");
    scanf("%d %d %d %d %d", &ma, &en, &ph, &ch, &cs);
    sum=ma+en+ph+ch+cs;
    per=sum/5;
    if(per>=60)
        printf("First Division");
    else if(per>=50)
        printf("Second Division");
    else if (per>=40)
        printf("Third Division");
    else
        printf("Fail");
getch();
}
