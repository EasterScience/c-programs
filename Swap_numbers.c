#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b , c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    c=a;
    a=b;
    b=c;
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d", b);
    getch();
}
