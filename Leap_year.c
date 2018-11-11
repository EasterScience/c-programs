#include<stdio.h>
#include<conio.h>
void main()
{
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);
    if(y%4==0)
    {
        printf("%d is leap year.", y);
    }
    else
        printf("%d is not a leap year.", y);
    getch();
}
