#include<stdio.h>
#include<conio.h>
int factorial(int);
void main()
{
    int num, fact;
    printf("Enter any number: ");
    scanf("%d", &num);
    fact=factorial(num);
    printf("The factorial of %d is %d.", num, fact);
getch();
}
int factorial(int x)
{
    int i, f=1;
    for(i=x;i>=1;i--)
    {
        f=f*i;
    }
    return (f);
}
