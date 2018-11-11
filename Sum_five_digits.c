#include<stdio.h>
#include<conio.h>
void main()
{
    int num, a, b, c, d, e, sum;
    printf("Enter the number of five digits: ");
    scanf("%d", &num);
    a=num/10000;
    num=num%10000;
    b=num/1000;
    num=num%1000;
    c=num/100;
    num=num%100;
    d=num/10;
    num=num%10;
    e=num;
    sum=(a+b+c+d+e);
    printf("The sum of five digits is: %d", sum);
    getch();
}
