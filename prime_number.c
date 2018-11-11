#include<stdio.h>
#include<conio.h>
void main()
{
    int num, i=2;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(i<=num-1)
    {
        if(num%i==0)
        {
            printf("%d is not a prime number.", num);
            break;
        }
        i++;
    }
    if(i==num)
        printf("%d is a prime number.", num);
    getch();
}
