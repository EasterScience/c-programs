#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, c, d;
    a=sizeof(int);
    b=sizeof(float);
    c=sizeof(char);
    d=sizeof(double);
    printf("Size of integer is: %d\n", a);
    printf("Size of float is: %d\n", b);
    printf("Size of char is: %d\n", c);
    printf("Size of double is: %d", d);
    getch();
}
