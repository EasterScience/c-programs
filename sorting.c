#include<stdio.h>
#include<conio.h>
void main()
{
    int n, num[20],i,j,temp;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    printf("Enter elements values: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &num[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    printf("The numbers of elements after sorting are_\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
    getch();
}
