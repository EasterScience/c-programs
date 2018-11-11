#include<stdio.h>
#include<conio.h>
void main()
{
    int a[15], n, i, j, temp;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    printf("Enter the elements of array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    printf("After Bubble Sorting...\n");
    for(i=0;i<n;i++)
    {
            printf("\t%d", a[i]);
    }
    getch();
}
