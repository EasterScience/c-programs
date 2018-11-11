#include<stdio.h>
#include<conio.h>
void main()
{
    int i, sum=1;
    while(i<=100)
    {
    sum=sum+i;
    i=i+1;
    }
    printf("%d\t",sum);
    getch();
}
