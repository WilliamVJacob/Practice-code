#include<stdio.h>
#include<stdlib.h>
#include "../essential/essential.h"

typedef struct node node;
struct  node
{
    int info;
    node *next;
};
void add_at_begining(int);
void add_at_end( int);
void add_at_nth(int pos, int num);
void display();

node *head = NULL;

void display()
{
    printf("List is \t");
    node *view=head;
    while (view != NULL)
    {
        printf("%d ", view->info);
        view = view->next;
    }
    printf("\n");
}

void count()
{
    int count = 0;
    node *view = head;
    while (view != NULL)
    {
        view = view->next;
        count++;
    }
    printf("The total elements = %d\n",count);
    printf("\n");
}

void search(int input)
{
    int count=0;
    node *view = head;
    while (view != NULL)
    {
        count++;
        if(view->info == input)
            printf("number %d found at %d pos\n", view->info,count);
        view = view->next;
    }
    printf("\n");
}

void add_at_begining(int num)
{

    node *temp = (node *)malloc(sizeof(node));
    if(temp != NULL){
        temp->next = head;
        temp->info = num;
        head = temp;

    }
    else
        perror("malloc");
}

void add_at_end(int num)
{

    node *p = head;
    node *temp = (node *)malloc(sizeof(node));
    if (temp != NULL)
    {
      //  printf("num %d  next %p\n", num, *p2head);
        temp->info = num;
        temp->next = NULL;
        if (p == NULL)
        {
            head = temp;
        }
        else
        {
            while (p->next != NULL)
            {
              //  printf("%d ", p->info);
                p = p->next;
            }
            p->next = temp;
        }
    }
}

void add_at_nth(int pos, int num)
{

    node *p = head;
    node *temp = (node *)malloc(sizeof(node));
    if (temp != NULL)
    {      
        temp->info = num;
       // printf("num %d  head %p\n", temp->info, head);
            if(pos == 1)
            {
                temp->next = head;
                head = temp;
                
            }
            //p = head;
            for(int i = 1 ; i < ((pos -1) ) ;i++)
            {
                if (p == NULL){
                    printf("There are less elements than %d\n", pos);
                    return;
                }
                printf("%d ", p->info);
                p = p->next;
            }

  //          else
            {
                temp->next=p->next;
                p->next = temp;
            }
    }
} 
void delete(int input){
    node* temp = NULL,*p = NULL;
    if(head == NULL){
        printf("List is empty\n");
        return;
    }
    if(head->info == input){
        temp = head;
        head = head->next;
        free(temp);
        return;

    }
    p = head;
    while(p->next!= NULL){
        printf("%d ", p->info);

            temp = p->next;
        if(temp->info == input)
        {
            p ->next= temp->next;
            free(temp);
            return;

        }
        p=p->next;
    }
    printf("Element not found\n");
    return;
}
void reversal()
{
    node* p =NULL;
    node* prev=NULL;
    node* next = NULL;
    p = head;
    while (p !=NULL)
    {
        next = p->next;
        p->next = prev;
        prev= p;
        p = next;
    }
    head=prev;
    display();
}

int main(int argc, char *argv[]){

    int num,input;
    while(1){
        printf("Enter your choice\n");
        scanf("%d", &num);
        switch (num)
        {
        case 1:
            printf("Enter the number\n");
            scanf("%d", &input);
            add_at_begining(head,input);
            break;
        case 2:
            printf("Enter the number\n");
            scanf("%d", &input);
            add_at_end(input);
            break;
        case 3:
            printf("Enter the number\n");
            scanf("%d", &input);
            add_at_nth(3, input);
            break;
        case 4:
            display();
            break;
        case 5:
            printf("Enter the number to search\n");
            scanf("%d", &input);
            search(input);
            break;
        case 6:
            count();
            break;
        case 7:
            reversal();
            break;
        case 8:
            printf("Enter the number to delete\n");
            scanf("%d", &input);
            delete(input);
            break;
        default:
            break;
        }
        
    }
}