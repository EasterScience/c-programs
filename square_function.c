#include<stdio.h>
#include<conio.h>
float square(float);
int main()
{
    float a, b;
    printf("Enter any number: ");
    scanf("%f", &a);
    b=square(a);
    printf("Square of %f is %f\n",a,b);
    getch();
}
float square (float x)
{
    float y;
    y=x*x;
    return(y);
}