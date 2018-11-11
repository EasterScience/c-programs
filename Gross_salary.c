#include<stdio.h>
#include<conio.h>
void main()
{
    float bs, gs, da, hra;
    printf("Enter basic salary: ");
    scanf("%f", &bs);
    if(bs<1500)
    {
        hra=bs*0.10;
    da=bs*0.90;
    }
    else
    {
        hra=500;
        da=bs*0.98;
    }
    gs=bs+hra+da;
    printf("Gross Salary is %f.", gs);
    getch();
}
