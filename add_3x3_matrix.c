#include<stdio.h>

void main()
{
    int a[3][3],b[3][3],sum[3][3],r,c,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the a[%d][%d] element: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the b[%d][%d] element: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("\nThe Addition of the two Matrix is: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j==2)
                printf("[%d]\n",sum[i][j]);
            else
                printf("[%d]",sum[i][j]);
        }
    }
}
