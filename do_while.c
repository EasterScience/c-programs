#include<stdio.h>
#include<conio.h>
void main()
{
    int a, b, ch, sum;
    do
        {
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    sum=a+b;
    printf("\nThe sum of two numbers is %d\n\n", sum);
printf("Press 1 to continue or press any key for exit: ");
scanf("%d", &ch);
}
while(ch==1);
    getch();
}
