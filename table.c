#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1, num;
    printf("Enter any number: ");
    scanf("%d", &num);
    while(i<=10)
    {
        printf("%d x %d = %d\n", num, i, num*i);
        i=i+1;
    }
    getch();
}
