#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c;
    printf("Enter A: ");
    scanf("%d", &a);
    printf("Enter B: ");
    scanf("%d", &b);
    printf("Enter C: ");
    scanf("%d", &c);
if(a>b)
{
    if(a>c)
    {
        printf("The value of A = %d is greatest.", a);
    }
    else
        printf("The value of C = %d is greatest.", c);
}
else
{
    if(b>c)
    {
        printf("The value of B = %d is greatest.", b);
    }
    else
        printf("The value of C = %d is greatest.", c);
}
getch();
}
