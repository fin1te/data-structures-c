#include<stdio.h>

void main()
{
    int size,i,pos,val,arr[20];
    printf("Enter the no. of Elements: ");
    scanf("%d",&size);
    printf("Enter the Elements: \n");

    for(i=0;i<size;i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the Position to Insert Element: ");
    scanf("%d",&pos);

    printf("Enter the value to insert at Position %d: ",pos);
    scanf("%d",&val);

    for(i=(size-1);i>=pos;i--)
        arr[i+1]=arr[i];
    arr[pos]=val;
    size+=1;

    printf("The array after insertion is: \n");
    for(i=0;i<size;i++)
        printf("arr[%d]: %d\n",i,arr[i]);
}
