#include<stdio.h>
#include<conio.h>
void main()
{
    int p, t;
    float si, r;
    printf("Enter the principle: ");
    scanf("%d", &p);
    printf("Enter the rate: ");
    scanf("%f", &r);
    printf("Enter the time: ");
    scanf("%d", &t);
    si=(p*t*r)/100;
    printf("Simple interest is: %f", si);
    getch();
}