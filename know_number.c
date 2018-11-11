#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter any number 0 to 9: ");
    scanf("%d", &a);
    if(a==0)
        printf("You entered '0'");
    else if (a==1)
    printf("You entered '1'");
    else if (a==2)
    printf("You entered '2'");
    else if (a==3)
    printf("You entered '3'");
    else if (a==4)
    printf("You entered '4'");
    else if (a==5)
    printf("You entered '5'");
    else if (a==6)
    printf("You entered '6'");
    else if (a==7)
    printf("You entered '7'");
    else if (a==8)
    printf("You entered '8'");
    else if (a==9)
    printf("You entered '9'");
    else
        printf("You entered something other than numbers.");
    getch();
}
