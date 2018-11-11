#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, q, r;
    printf("Enter the dividend: ");
    scanf("%d", &a);
    printf("Enter the divisor: ");
    scanf("%d", &b);
    q=a/b;
    r=a%b;
    printf("\nThe value of quotient is: %d\n", q);
    printf("The value of remainder is: %d", r);
    getch();
}
