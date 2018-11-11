#include<stdio.h>
#include<conio.h>
void main()
{
    int rad;
    float pi=3.14, area;
    printf("Enter the value of radius: ");
    scanf("%d", &rad);
    area=pi*rad*rad;
    printf("The area of the circle is: %f", area);
    getch();
}
