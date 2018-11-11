#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, add, sub, mul;
    float div;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    add=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("The addition of %d and %d is: %d\n", a, b, add);
    printf("The subtraction of %d and %d is: %d\n", a, b, sub);
    printf("The multiplication of %d and %d is: %d\n", a, b, mul);
    printf("The division of %d and %d is: %f\n", a, b, div);

    getch();
}
