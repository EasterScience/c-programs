#include<stdio.h>
#include<conio.h>
void main()
{
    int a[15], i, j, temp, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements of an array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
            for(i=1; i<n;i++)
            {
                temp=a[i];
                j=i;
                while(j>0 && a[j-1]>temp)
                {
                    a[j]=a[j-1];
                    j=j-1;
                }
                a[j]=temp;
            }

        printf("After Insertion Sorting...\n");
        for(i=0;i<n;i++)
        {
            printf("\t%d", a[i]);
        }
        getch();
}
