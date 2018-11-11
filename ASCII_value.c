#include<stdio.h>
#include<conio.h>
void main()
{
    char name;
    int x;
    printf("Enter any character: ");
    scanf("%c", &name);
    x=name;
    printf("The ASCII value of %c is: %d", name, x);
    getch();
}
