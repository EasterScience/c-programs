#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nThe value of a is: %d\n", a);
    printf("The value of b is: %d", b);
    getch();
}
