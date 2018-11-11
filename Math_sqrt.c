#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    float s;
    printf("Enter the number: ");
    scanf("%d", &a);
    s=sqrt(a);
    printf("The square root of %d is: %f", a, s);
    getch();
}
