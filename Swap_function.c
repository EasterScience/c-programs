#include<stdio.h>
#include<conio.h>
int swap(int x, int y);
void main()
{
    int a, b;
    printf("Enter the value of a= ");
    scanf("%d", &a);
    printf("Enter the value of b= ");
    scanf("%d", &b);
    swap(a, b);
    getch();
}
int swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
    printf("\n\nThe value of a is %d.\n", x);
    printf("The value of b is %d.\n", y);
}
