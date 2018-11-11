#include<stdio.h>
#include<conio.h>
void main()
{
    int rs;
    printf("How much money do you have in your pocket: ");
    scanf("%d", &rs);

    if(rs>=600)
        goto delhi;
    else
    {
        printf("Go to SRS");
    }
    delhi:
        printf("Go to Delhi");
        getch();
}
