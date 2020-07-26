#include<stdio.h>
#include<stdlib.h>
#define size 5
//const int size = 5; //why const does not work
int top=-1,val;
int stack[size];


void push()
{
    if(top==(size-1))
        printf("\n\tStack is Full !!");
    else
    {
        printf("\n\tEnter the value to Push: ");
        scanf("%d",&val);
        top++;
        stack[top]=val;
    }
}

void pop()
{
    if(top==-1)
        printf("\n\tStack is Empty !!");
    else
    {
        printf("\n\tThe Number [ %d ] has been Popped.",stack[top]);
        top--;
    }
}

void peek()
{
    if(top==-1)
        printf("\n\tStack is Empty !!");
    else
        printf("\n\tThe Top Element is: [ %d ]",stack[top]);
}

void display()
{
    for(int i=(top);i>=0;i--)
    {
        printf("\n\t[ %d ]",stack[i]);
    }
}

void main()
{
    while(1)
    {
        int choice;
        printf("\n\t____ M E N U ____\n\t1. Push\n\t2. Pop\n\t3. Peek\n\t4. Display\n\t5. Exit");
        printf("\n\tEnter the selection : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
                break;
            case 2: pop();
                break;
            case 3: peek();
                break;
            case 4: display();
                break;
            case 5: exit(0);
        }
    }
}
