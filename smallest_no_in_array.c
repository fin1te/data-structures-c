#include<stdio.h>

void main()
{
    int i,size,arr[20],small;
    printf("Enter the no. of Elements in the array: ");
    scanf("%d",&size);
    printf("Enter the Elements of the array: \n");
    for(i=0;i<size;i++)
    {
        printf("arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    small=arr[0];
    for(i=0;i<(size);i++)
        small=(small <= arr[i]) ? small : arr[i];
    printf("\nThe smallest value is: %d",small);
}
