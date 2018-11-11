#include<stdio.h>
#include<conio.h>
void main()
{
    int num, count=0;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(num)
    {
        num=num/10;
        count=count+1;
    }
    printf("Total digits are = %d", count);
    getch();
}
