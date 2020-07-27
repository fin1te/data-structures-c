#include<stdio.h>
void main()
{
    int i,pos,size,arr[20];
    printf("Enter the no. of Elements in Array: ");
    scanf("%d",&size);
    printf("Enter the Elements in Array: \n");
    for(i=0;i<size;i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter the Elements Position to be deleted: ");
    scanf("%d",&pos);

    for(i=pos;i<=(size-1);i++)
        arr[i]=arr[i+1];
    size-=1;
    printf("The Array after deletion is: \n");
    for(i=0;i<size;i++)
        printf("arr[%d]: %d\n",i,arr[i]);
}
