#include<stdio.h>
#include<conio.h>
void main()
{
    int num, i, fact=1;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d.", num, fact);
    getch();
}
