#include<stdio.h>
#include<conio.h>
void main()
{
        char str1[20];
        char str2[20];

        printf("Enter first string: ");
        gets(str1);

        printf("Enter second string: ");
        gets(str2);

        if(strcmp(str1,str2)==0)
            printf("\n Strings are equal");
        else
            printf("\n Strings are not equal");
        getch();
}
