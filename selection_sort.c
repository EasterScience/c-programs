#include<stdio.h>
#include<conio.h>
void main()
{
    int a[15], i, j, temp, n, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

        for(i=0;i<n;i++)
        {
            min=i;
            for(j=i+1; j<n;j++)
            {
                if(a[j]<a[min])
                {
                    min=j;
                }
            }
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
        printf("After Selection Sorting...\n");
        for(i=0;i<n;i++)
        {
            printf("\t%d", a[i]);
        }
        getch();
}
