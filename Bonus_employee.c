#include<stdio.h>
#include<conio.h>
void main()
{
    int sal= 10000, bonus, cy, yoj, yos;
    printf("Enter the current year: ");
    scanf("%d", &cy);
    printf("Enter the year of joining: ");
    scanf("%d", &yoj);
    yos=cy-yoj;
    if(yos>3)
    {
        bonus=2500;
        printf("Salary + Bonus = %d", sal+bonus);
    }
    else
        printf("Salary = %d", sal);
getch();
}

