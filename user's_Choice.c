#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    float rad, pi=3.14, ar, a, b;
    printf("\nPress 1 for circle area\n Press 2 for rectangle area\n Press 3 for square area\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("You choose to find area of circle...\n");
        printf("Enter radius of a circle: ");
        scanf("%f", &rad);
        ar=pi*rad*rad;
        printf("The area of circle is %f.", ar);
    break;

    case 2:
        printf("You choose to find area of rectangle...\n");
        printf("Enter hight of rectangle: ");
        scanf("%f", &a);
        printf("Enter width of square: ");
        scanf("%f", &b);
        ar=a*b;
        printf("The are of rectangle is %f", ar);
        break;
    case 3:
        printf("You choose to find the area of square...\n");
        printf("Enter the length of square's one side: ");
        scanf("%f", &a);
        ar=a*a;
        printf("The area of square is %f", ar);
        break;
    default:
        printf("You entered wrong entry.");
    }
getch();
}
