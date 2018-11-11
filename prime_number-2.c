#include<stdio.h>
#include<conio.h>
void main()
{
    int i, num;
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("Not a prime number.");
            break;
        }
        else
        {
            printf("Number is Prime");
            break;
        }
    }
getch();
}
