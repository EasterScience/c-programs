#include<stdio.h>
#include<conio.h>
void main()
{
    int x;
    printf("Enter any week's value from 1 to 7: ");
    scanf("%d", &x);
    switch(x)
    {
    case 1:
        printf("Sunday is the first day of the week.");
        break;
    case 2:
    printf("Monday is the second day of the week.");
    break;
      case 3:
        printf("Tuesday is the third day of the week.");
        break;
      case 4:
        printf("Wednesday is the fourth day of the week.");
        break;
      case 5:
        printf("Thursday is the fifth day of the week.");
        break;
      case 6:
        printf("Friday is the sixth day of the week.");
        break;
      case 7:
        printf("Saturday is the seventh day of the week.");
        break;
        }
getch();
}
