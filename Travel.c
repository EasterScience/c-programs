#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter Money: ");
    scanf("%d", &a);
    if(a>10000)
    {
        printf("You can go anywhere in the India.");
    }
    else
    {
        if(a==10000)
        {
            printf("You can purchase Redmi y2");
        }
        else
            printf("You can travel inside Bijnor.");
    }
    getch();
}
