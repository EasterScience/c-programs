#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    long s;
    printf("Enter any number: ");
    scanf("%d", &a);
    printf("Enter power: ");
    scanf("%d", &b);
    s=pow(a,b);
    printf("%ld", s);
    getch();
}
