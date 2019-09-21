#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*link;
};
struct node *first=NULL;

void insert();
void delet();
void display();

void main()
{
    int choice;

    while(1)
    {
        printf("\nPress 1 to insert\n");
        printf("Press 2 to delete\n");
        printf("Press 3 to display\n");
        printf("Press 4 to Stop\n");
        printf("Enter your choice   ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:insert();
                   break;
            case 2:delet();
                   break;
            case 3:display();
                   break;
            default:exit(0);
                   break;
        }
    }
}

void insert()
{
    int item;
    struct node*p,*temp;
    p=malloc(sizeof(struct node));
    printf("Enter item to be inserted\n");
    scanf("%d",&item);
    p->data=item;
    p->link=NULL;

    if(first==NULL)
    {
        first=p;
    }
    else
    {
      temp=first;
      while(temp->link!=NULL)
      {
        temp=temp->link;
      }
      temp->link=p;
    }
}
void delet()
{
    struct node *temp;
    if(first==NULL)
    {
        printf("deletion not possible\n");
    }
    else
        if(first->link==NULL)
    {
        printf("element deleted is %d\n",first->data);
        free(first);
        first=NULL;
    }
    else
    {
      printf("element deleted is %d\n",first->data);
      temp=first;
      first=temp->link;
      free(temp);
    }
}
void display()
{
    struct node *temp;
    if(first==NULL)
    {
       printf("Display not possible\n");
    }
    else
        if(first->link==NULL)
    {
        printf("element deleted is %d\n",first->data);
    }
    else
    {
        temp=first;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
}
